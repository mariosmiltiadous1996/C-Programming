#include <stdio.h>
#include <stdlib.h>
 
int strmatch(const char* first, const char* second)
{
    if (*first == '\0' && *second == '\0') return 1;
    if (*first == '?' || *first == *second) return strmatch(first+1, second+1);
    return 0;
}
 
int main(int argc, const char * argv[])
{
    printf("%s\n", strmatch("b??h.?peg", "blah.jpeg")? "We have a match!": "We have no match!");
    return 0;
}
