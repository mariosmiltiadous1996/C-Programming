#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define DELIM " \r\n\t,.-;:_^#+*\\=)(/@&%$Я\"мо?!1234567890}][{'`"
#define BufferSize 4096
 
int strmatch(const char* first, const char* second)
{
    if (*first == '\0' && *second == '\0') return 1;
    if (*first == '*' && *(first+1) != '\0' && *second == '\0') return 0;
    if (*first == '?' || *first == *second) return strmatch(first+1, second+1);
    if (*first == '*') return strmatch(first+1, second) || strmatch(first, second+1);
    return 0;
}
 
int main(int argc, const char * argv[])
{
    char line[BufferSize];
    char wildcard[25];
    char *buf=0;
     
    //printf("%s: %s\n", buf, strmatch("g*k??g*", "geeks")? "We have a match!": "We have no match!");
     
    printf("Please enter the wildcard pattern: ");
    scanf("%[^\n]%*c", wildcard);
     
    printf("Please enter some words separated by space: ");
    fgets(line, BufferSize, stdin);
    char *ret = line;
 
    while((buf = strtok_r(ret, " \n", &ret)))
    {
        if((strlen(buf) > 0) && (buf[0] != '\t') && (buf[0] != '\n') && (buf[0] != '\0') && (buf[0] > 0))
            printf("%s: %s\n", buf, strmatch(wildcard, buf)? "We have a match!": "We have no match!");
    }
 
    return 0;
}
