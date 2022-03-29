#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ROWS 5
#define COLS 25

char *strlwr(char *s)
{
    char *tmp = s;
    
    for (;*tmp;++tmp) *tmp = tolower(*tmp);
    
    return s;
}

char uniqueChar(char data[][COLS], char *s)
{
    char *ptr = NULL;
    int i = 0;
    
    for(i = 0; i < ROWS; i++) strlwr(data[i]);
    
    strlwr(s);
    
    for(;*s;s++)
    {
        for(i = 0; i < ROWS; i++)
        {
            ptr = strchr(data[i], *s);
            if (ptr != NULL) break;
        }
        if(ptr == NULL) return *s;
        
    }
    return 0;
}

int main(int argc, const char * argv[])
{
    char string[] = "HeLLoWOrlDxcx";
    char ch;
    char data[ROWS][COLS] = {{"eiRinH"}, {"neoptoleMos"}, {"Marios"}, {"KoStis"}, {"gewRGe"}};
    int count;
    
    ch = uniqueChar(data, string);
    
    printf("%c\n", ch);

    return 0;
}
