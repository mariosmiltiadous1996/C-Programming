#include <stdio.h>
#include <stdlib.h>
 
int strmatch(const char* first, const char* second)
{
    if (*first == '\0' && *second == '\0') return 1;
    if (*first == '*' && *(first+1) != '\0' && *second == '\0') return 0;
    if (*first == *second) return strmatch(first+1, second+1);
    if (*first == '*') return strmatch(first+1, second) || strmatch(first, second+1);
    return 0;
}
 
int main(int argc, const char * argv[])
{
    printf("%s\n", strmatch("bla*h.*", "blaaaah.jpeg")? "We have a match!": "We have no match!");
    return 0;
}
