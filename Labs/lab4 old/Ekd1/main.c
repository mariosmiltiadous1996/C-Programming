#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DELIM " \r\n\t,.-;:_^#+*\\=><)(/@&%$ß\"ìî?!1234567890}][{'`"
#define BufferSize 4096

void welcomeMSG();
void freeMem(char *string[], const int size);
void sortArray(char *string[], const int size);
static int isPresent(char *string[], const int size, const char *value);
static int binsearch(char *string[], const int size, const char *value);
char **cntCWords(char *fln, int *nCWords);
void cntVarNames();
int *histogram(char *fln, char *cWords[], int *nCWords, int flag);
void svStats();

int main(int argc, char *argv[])
{
    int choice = 1;
    int nCWords = 0, nVarNames = 0;
    int *histo = 0;
    char **cWords = 0, **varNames = 0;
    char fl[20] = {0};
    
    printf("*~*~*~*Welcome to C Source Code Analyser*~*~*~*\n-----------------------------------------------\n\n");
    printf("Please type the name of the source code file including the extension <<.c>>: ");
    scanf("%[^\n]s%*c", fl);
    
    system("cls");
    
    while (choice)
    {
        welcomeMSG();
        scanf("%d%*c", &choice);
        switch(choice)
        {
            case 0:
                break;
            case 1:
                cWords = cntCWords(fl, &nCWords);
                system("cls");
                
                printf("\nNumber of C words in file: %d\n", nCWords);
                histo = histogram(fl, cWords, &nCWords, 1);
                
                break;
            case 2:
                cntVarNames();
                break;
            case 3:
                if(cWords == NULL || histo == NULL) cWords = cntCWords(fl, &nCWords);
                
                system("cls");
                histo = histogram(fl, cWords, &nCWords, 1);
                
                break;
            case 4:
                svStats();
                break;
            default:
                printf("\n*--------------------------------*\n");
                printf("   Invalid Choice. Try Again!!\n");
                printf("*--------------------------------*\n\n");
                break;
        }
        if(choice != 0) {system("pause"); system("cls");}
    }
    
    freeMem(cWords, nCWords);
    freeMem(varNames, nVarNames);
    free(histo);
    return 0;
    
}

void welcomeMSG()
{
    printf("*~*~*~*Welcome to C Source Code Analyser*~*~*~*\n-----------------------------------------------\n\n");
    printf("1 - Count C words.\n");
    printf("2 - Count distinct variable names.\n");
    printf("3 - Print histogram.\n");
    printf("4 - Save statistics.\n");
    printf("Please type the number of fuction to be executed or type '0' to exit: ");
}

void freeMem(char *string[], const int size)
{
    int i;
    
    for(i = 0; i < size; i++)
        if(string[i]) free(string[i]);
    string = NULL;
}

void sortArray(char *string[], const int size)
{
    int i, j;
    char *temp;
    
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (strcmp(string[j], string[j+1]) > 0)
            {
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
}


static int binsearch(char *string[], const int size, const char *value)
{
    int position;
    int begin = 0;
    int end = size-1;
    int cond = 0;
    
    while(begin <= end)
    {
        position = (begin + end) / 2;
        if((cond = strcmp(string[position], value)) == 0)
            return position;
        else if(cond < 0)
            begin = position + 1;
        else
            end = position - 1;
    }
    
    return -1;
}

static int isPresent(char *string[], const int size, const char *value)
{
	int i;
	
    if (size < 0) return -1;
    if (size == 0) return -1;
    
    for(i = 0; i < size; i++)
        if((strcmp(string[i], value)) == 0) return i;
    
    return -1;
}

char **cntCWords(char *fln, int *nCWords)
{
    char *varTypes[] = {
        "auto",   "else",     "long",   "switch",
        "break",   "enum", "register",  "typedef",
        "case", "extern",   "return",    "union",
        "char",  "float",    "short", "unsigned",
        "const",    "for",   "signed",     "void",
        "continue",   "goto",   "sizeof", "volatile",
        "default",     "if",   "static",    "while",
        "do",     "in",   "struct",   "double"
    };
    int cntWords = 0;
    char line[BufferSize];
    char *buf=0;
    char **temp = 0;
    FILE *fp;
    
    if((fp = fopen(fln, "rt")) == NULL)
    {
        system("cls");
        puts("\nERROR 1: Can't open file. Exiting...");
        system("timeout 1 > NUL");
        exit(EXIT_FAILURE);
    }
    
    sortArray(varTypes, 32);
    
    while(fgets(line, BufferSize, fp))
    {
        buf = strtok(line, DELIM);
        while(buf)
        {
            if((strlen(buf) > 0) && (buf[0] != '\t') && (buf[0] != '\n') && (buf[0] != '\0') && (buf[0] > 0))
            {
                if(binsearch(varTypes, 32, buf) != -1)
                {
                    if((isPresent(temp, cntWords, buf)) == -1)
                    {
                        if((temp = realloc(temp, (cntWords + 1)*sizeof(*temp))) == NULL)
                        {
                            system("cls");
                            puts("\nERROR 2: Can't reallocate memory. Exiting...");
                            system("timeout 1 > NUL");
                            freeMem(temp, cntWords);
                            exit(EXIT_FAILURE);
                        }
                        if((temp[cntWords] = malloc((strlen(buf) + 1)*sizeof(char))) == NULL)
                        {
                            system("cls");
                            puts("\nERROR 3: Can't allocate memory. Exiting...");
                            system("timeout 1 > NUL");
                            freeMem(temp, cntWords);
                            exit(EXIT_FAILURE);
                        }
                        strcpy(temp[cntWords++], buf);
                    }
                }
            }
            buf = strtok(NULL, DELIM);
        }
    }
    
    *nCWords = cntWords;
    
    return temp;
}

void cntVarNames()
{
    system("cls");
    printf("\nFunction: Count Variable Names\n\n");
}

int *histogram(char *fln, char *cWords[], int *nCWords, int flag)
{
    int position, i, j;
    char line[BufferSize];
    int *temp = 0;
    char *buf = 0;
    FILE *fp;
    
    if((fp = fopen(fln, "rt")) == NULL)
    {
        system("cls");
        puts("\nERROR 4: Can't open file. Exiting...");
        system("timeout 1 > NUL");
        exit(EXIT_FAILURE);
    }
    
    if((temp = calloc(*nCWords, sizeof(int))) == NULL)
    {
        system("cls");
        puts("\nERROR 6: Can't allocate memory. Exiting...");
        system("timeout 1 > NUL");
        free(temp);
        exit(EXIT_FAILURE);
    }
    
    while(fgets(line, BufferSize, fp))
    {
        buf = strtok(line, DELIM);
        while(buf)
        {
            if((strlen(buf) > 0) && (buf[0] != '\t') && (buf[0] != '\n') && (buf[0] != '\0') && (buf[0] > 0))
                if((position = isPresent(cWords, *nCWords, buf)) != -1)
                    temp[position]++;
            buf = strtok(NULL, DELIM);
        }
    }
    fclose(fp);
    
    if(flag)
    {
        printf("\n----------------------------------------------------------\n");
        printf("%5s%*s%*s%*s%*s\n", "Num", 3, "|", 8, "Words", 3, "|", 23, "Histogram");
        printf("----------------------------------------------------------\n");
        
        for(i = 0; i < *nCWords; i++)
        {
            printf("%4d%*s%*s%*s%*s ", temp[i], 4, "|", 5+(int)strlen(cWords[i])/2,cWords[i],4-(int)strlen(cWords[i])/2,"", 2, "|");
            for(j = 0; j < temp[i]; j++)
                printf("*");
            printf("\n");
        }
        
        printf("----------------------------------------------------------\n\n");
    }
    
    return temp;
}

void svStats()
{
    system("cls");
    printf("\nFunction: Save Statistics\n\n");
}
