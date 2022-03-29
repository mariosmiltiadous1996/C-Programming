#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ROWS 5
#define COLS 10

char *strlwr(char *s)
{
    char *temp = s;
    
    for (;*temp;++temp) *temp = tolower(*temp);
    
    return s;
}

char *uniqueSub(char data[][COLS], char *s)
{
    char *ptr = NULL;
    char *str = malloc(2*sizeof(char));
    char *retStr = malloc(2*sizeof(char));
    char *temp = malloc(1+strlen(s));
    int i = 0, j = 0;
    
    strcpy(temp, s);
    
    for(i = 0; i < ROWS; i++) strlwr(data[i]);
    
    strlwr(temp);
    
    for(j = 0; j < strlen(temp); j++)
    {
        sprintf(str,"%c%c", temp[j], temp[j+1]);
        sprintf(retStr,"%c%c", s[j], s[j+1]);
        for(i = 0; i < ROWS; i++)
        {
            ptr = strstr(data[i], str);
            if (ptr != NULL) break;
        }
        if(ptr == NULL) return retStr;
    }
    return 0;
}

int main(int argc, const char * argv[])
{
    char string[] = "heLLoWorLDxcxc";
    char *subStr;
    char data[ROWS][COLS] = {{"Elena"}, {"Lemis"}, {"Marios"}, {"Kostis"}, {"Christos"}};
    int count;
 
    subStr = uniqueSub(data, string);
    
    printf("%s\n", subStr);
   
    return 0;
}
