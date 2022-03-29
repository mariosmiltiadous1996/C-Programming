#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i, j, n;  
   
    //Reads number of rows to be printed from user  
    printf("Enter number of rows: ");  
    scanf("%d", &n);  
  
    for(i=1; i<=n; i++)  
    {  
        //Prints trailing spaces  
        for(j=1; j<i; j++)  
        {  
            printf(" ");  
        }  
  
        //Prints the hollow square   
        for(j=1; j<=n; j++)  
        {  
            if(i==1 || j==1 || i==n || j==n)  
            {  
                printf("*");  
            }  
            else  
            {  
                printf(" ");  
            }  
        }  
  
        printf("\n");  
    }  
  
    return 0;  
}  



