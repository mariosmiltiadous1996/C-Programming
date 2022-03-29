#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

#define ROWS 20
#define COLS 60

void floodFill(int board[][COLS], int x, int y, int oldColor, int newColor);

void optInfo()
{
    putchar('\n');
    printf("1 - Red.\n");
    printf("2 - Green.\n");
    printf("3 - Blue.\n");
    printf("4 - Yellow.\n");
    printf("5 - Purple.\n");
    printf("Please type the number of color or type '0' to exit: ");
}


void arrInit(int board[][COLS])
{
    int i, j;
    
    //Seed initialization
    srand((unsigned)time(NULL));
    
    //Initializing board with random colors(numbers)
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++) board[i][j] = rand() % 5 + 1;
}

void arrPrint(int board[][COLS])
{
    int i, j;
    
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++) printf("%3d", board[i][j]);
        putchar('\n');
    }
}

void changeColor(int board[][COLS], int color)
{
    int oldColor = board[0][0]; //upper-left corner color
    int newColor = color;  //replacement color
    if(newColor == oldColor) return;
    floodFill(board, 0, 0, oldColor, newColor);
}

void floodFill(int board[][COLS], int x, int y, int oldColor, int newColor)
{
    if(x >= 0 && x < ROWS && y >= 0 && y < COLS && board[x][y] == oldColor && board[x][y] != newColor)
    {
        board[x][y] = newColor; //replaces old color with new color
        
        floodFill(board, x+1, y  , oldColor, newColor); //south node(down)
        floodFill(board, x  , y+1, oldColor, newColor); //east node(right)
        floodFill(board, x-1, y  , oldColor, newColor); //north node(up)
        floodFill(board, x  , y-1, oldColor, newColor); //west node(left)
    }
}

int chkBoard(int board[][COLS])
{
    int color = board[0][0];
    int i, j;
    
    //Checks if the whole board is filled with the same color
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            if(board[i][j] != color) return FALSE;
    
    return TRUE;
}

int main(int argc, const char * argv[])
{
    int board[ROWS][COLS];
    int color = 1;
    char choice = 'Y';
    int nMoves = 0;
    int win = FALSE;
    
    while (choice == 'Y' || choice == 'y')
    {
        arrInit(board); //Initialize board
        
        while(color)
        {
            system("cls");
            arrPrint(board);
            
            //Show options
            optInfo();
            
            //Color input
            scanf("%d%*c", &color);
            
            if(color == 0) break;
            //If the color is out of the range then asks for new input
            else if(color > 5 || color < 0)
            {
                printf("\n*------------------------*\n Wrong Color, Try Again!!\n*------------------------*\n\n");
                system("pause");
            }
            else
            {
                changeColor(board, color); //replaces the color
                nMoves++; //increments the moves
                
                //If the whole board is filled with same color then the game stops
                if((win = chkBoard(board))) break;
            }
        }
        
        system("cls");
        arrPrint(board);
        
        putchar('\n');
        if(win == TRUE) printf("You finished the game in %d moves!\n", nMoves);
        else printf("You did %d moves but the game is not over yet, why did you end it so early?\n", nMoves);
        putchar('\n');
        
        printf("Would you like to start a new game? [Y/N]: ");
        scanf("%c%*c", &choice);
        if(choice == 'Y' || choice == 'y')
        {
            color = 1;
            win = FALSE;
            nMoves = 0;
        }
    }
    
    return 0;
}
