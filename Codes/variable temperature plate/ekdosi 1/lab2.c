#include <stdio.h>
#include <stdlib.h>

void calc_temp(float array[10][20]);
void print_array(float array[10][20]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int main() {
	int i, j;
	
	float a[10][20] = {{3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,-1.5}, 
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5} ,{3.5,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,-1}} ;
	
	printf("TIME:0\n\n");
	print_array(a);
	calc_temp(a);
	printf("\n\nTIME:1\n\n");
	print_array(a);
	return 0;
}

void calc_temp(float array[10][20])
{
	int i,j;
	for (i=1; i<9; i++) 
	{
		for (j=1; j<19; j++)
			array[i][j] = 0.1*(array[i-1][j-1]+array[i-1][j]+
			array[i-1][j+1]+array[i][j-1]+
			2*array[i][j]+array[i][j+1]+
			array[i+1][j-1]+array[i+1][j]
			+array[i+1][j+1]);
	}	
}
void print_array(float array[10][20])
{
	int i,j;
	for (i=0; i<10; i++) 
	{
		for (j=0; j<20; j++)
		 	printf("%6.2f ",array[i][j]);
	 	printf("\n");
	}
}
