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
    int newColor = color; //replacement color
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

void cntNumbers(int board[][COLS], int temp[][2])
{
    int i, j, k;
    
    for(k = 0; k < 5; k++)
        for(i = 0; i < ROWS; i++)
            for(j = 0; j < COLS; j++)
                if(board[i][j] == k + 1) temp[k][1] += 1; //counts how many of each color there are in the board
}

int cntZeros(int temp[][2])
{
    int i;
    int nZeros = 0;
    
    //Replaces any color which is not present in the board with zero
    for(i = 0; i < 5; i++)
        if(temp[i][1] == 0) temp[i][0] = 0;
    
    //Counts how many colors are left
    for(i = 0; i < 5; i++)
        if(temp[i][0] == 0) nZeros++;
    
    return nZeros;
}

void cpNonZeroColors(int temp[][2], int temp2[][2])
{
    int i;
    int j;
    
    //Copies only the present colors in the board to a new array
    for(i = 0, j = 0; i < 5; i++)
    {
        if(temp[i][0] != 0)
        {
            temp2[j][0] = temp[i][0];
            temp2[j][1] = temp[i][1];
            j++;
        }
    }
}

void findMinMaxIndexes(int temp[][2], int *minIndex, int *maxIndex, int n)
{
    int i;
    int max = temp[0][1];
    int min = temp[0][1];
    
    //Finds the maximum and minimum number of colors and return the indexes
    for(i = 0; i < n; i++)
    {
        if(temp[i][1] > max)
        {
            max = temp[i][1];
            *maxIndex = i;
        }
        if(temp[i][1] < min)
        {
            min = temp[i][1];
            *minIndex = i;
        }
    }
    
}

int nColor(int board[][COLS], int lastNum1, int lastNum2, int lastNum3)
{
    int i, j;
    int index;
    int nZeros = 0;
    int maxIndex = 0;
    int minIndex = 0;
    int indexes[2];
    int nColors[5][2] = {{1,0},{2,0},{3,0},{4,0},{5,0}};
    
    cntNumbers(board, nColors);
    nZeros = cntZeros(nColors);
    
    int remNColors = 5-nZeros; //Number of present colors in the board
    int newColors[remNColors][2]; //New array of only present colors
    
    //Initialization for the present colors
    cpNonZeroColors(nColors, newColors);
    findMinMaxIndexes(newColors, &minIndex, &maxIndex, remNColors);
    
    //Seed initialization
    srand((unsigned)time(NULL));
    
    do
    {
        if(remNColors == 5)
        {
            //if the color next to the upper-left corner color is diferrent then use that color
            if(board[0][0] != board[0][1])
            {
                index = newColors[(board[0][1])-1][0]-1;
                break;
            }
            //if the color below the upper-left corner color is diferrent then use that color
            else if(board[0][0] != board[1][0])
            {
                index = newColors[(board[1][0])-1][0]-1;
                break;
            }
            //if the color which is diagonal to the upper-left corner color is diferrent then use that color
            else if(board[0][0] != board[1][1])
            {
                index = newColors[(board[1][1])-1][0]-1;
                break;
            }
            //Else pick a random one
            else index = rand () % remNColors;
        }
        //If the remaining present colors in the board are 3 then either use the one with the smallest number of occurrences or the next one smallest
        else if(remNColors == 3)
        {
            for(i = 0, j = 0; i < remNColors; i++)
                if(i != maxIndex) indexes[j++] = i;
            
            int tempIndex = indexes[rand() % 2];
            
            index = tempIndex;
            break;
        }
        //If the remaining present colors in the board are less than 3 then use the one with the minimum number of occurrences
        else if(remNColors < 3)
        {
            index = minIndex;
            break;
        }
        //Picks a random color
        else
            index = rand () % remNColors;
    }
    while(lastNum1 == newColors[index][0] || lastNum2 == newColors[index][0] || lastNum3 == newColors[index][0]); //checks whether the selected number is different from the last 3
    
    return newColors[index][0];
}

int main(int argc, const char * argv[])
{
    int board[ROWS][COLS];
    int color = 1;
    int nMoves = 0;
    int win = 0;
    
    arrInit(board); //Initialize board
    
    //3 last used numbers
    int lastNum1 = board[0][0];
    int lastNum2 = board[0][0];
    int lastNum3 = board[0][0];
    
    while(color)
    {
        system("cls");
        arrPrint(board);
        
        color = nColor(board, lastNum1, lastNum2, lastNum3); //gets the color for the replacement
        changeColor(board, color); //replaces the color
        nMoves++; //increments the moves
        
        //Update 3 last used numbers
        lastNum1 = lastNum2;
        lastNum2 = lastNum3;
        lastNum3 = color;
        
        //If the whole board is filled with same color then the game stops
        if((win = chkBoard(board))) break;
    }
    
    system("cls");
    arrPrint(board);
    
    putchar('\n');
    printf("Computer finished the game in %d moves!\n", nMoves);
    putchar('\n');
    
    return 0;
}
