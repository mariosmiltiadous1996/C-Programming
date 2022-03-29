#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void welcomeMSG();
void cntCWords();
void cntVarNames();
void histogram();
void svStats();

int main(int argc, char *argv[])
{
    int choice = 1;
    
    while (choice)
    {
        welcomeMSG();
        scanf("%d%*c", &choice);
        switch(choice)
        {
            case 0:
                break;
            case 1:
                cntCWords();
                break;
            case 2:
                cntVarNames();
                break;
            case 3:
                histogram();
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

void cntCWords()
{
    system("cls");
    printf("\nFunction: Count C Words\n\n");
}

void cntVarNames()
{
    system("cls");
    printf("\nFunction: Count Variable Names\n\n");
}

void histogram()
{
    system("cls");
    printf("\nFunction: Histogram\n\n");
}

void svStats()
{
    system("cls");
    printf("\nFunction: Save Statistics\n\n");
}
