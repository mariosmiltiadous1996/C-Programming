//
//  main.c
//  v4
//
//  Created by Neoptolemos Kyriakou on 02/04/17.
//  Copyright © 2017 Neoptolemos Kyriakou. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ROWS 5

char *strlwr(char *s)
{
    unsigned char *temp = (unsigned char *)s;
    
    for (;*temp;++temp) *temp = tolower((unsigned char) *temp);
    
    return s;
}

char *uniqueSub(char *data[], char *s)
{
    char *ptr = NULL;
    int i = 0, j = 0, k = 0;
    
    strlwr(s);
    
    for(i = 0; i < ROWS; i++) strlwr(data[i]);
    
    for(i = 1; i < strlen(s)+1; i++)
    {
        for(j = 0; j < strlen(s); j++)
        {
            char *str = malloc(i*sizeof(char));
            strncpy(str,s+j,i);
            str[i] = '\0';
            for(k = 0; k < ROWS; k++)
            {
                if(strcmp(data[k], s) != 0)
                {
                    ptr = strstr(data[k], str);
                    if (ptr != NULL) break;
                }
            }
            if(ptr == NULL) return str;
        }
    }
    
    return NULL;
}

int main(int argc, const char * argv[])
{
    char *subStr;
    char *data[ROWS], buf[80];
    int i;
    
    printf("Enter %d words, pressing Enter after each.\n",ROWS);
    
    for (i = 0; i < ROWS; i++)
    {
        printf("Word %d: ", i+1);
        gets(buf);
        data[i] = malloc(strlen(buf)+1);
        strcpy(data[i], buf);
    }
    
    putchar('\n');
    
    for(i = 0; i < ROWS; i++)
    {
        if((subStr = uniqueSub(data, data[i]))) printf("%s: %s\n", data[i], subStr);
        else printf("%s: No Unique Character(s).\n", data[i]);
    }
    
    return 0;
}
