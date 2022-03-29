#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strlwr(char *s)
{
    char *tmp = s;
    
    for (;*tmp;tmp++) *tmp = tolower(*tmp);
    
    return s;
}


int main(int argc, const char * argv[])
{
    char string[80];
    printf("Give a word: ");
    gets(string);
    
    strlwr(string);
    puts(string);
    return 0;
}
