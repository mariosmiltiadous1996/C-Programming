#include <stdio.h>
#include <stdlib.h>

void calc_temp(float array[10][20]);
void print_array(float array[10][20]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int i, j;
	float a[10][20] = {
	{3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,-1.5}, 
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5},
	{3.5,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,-1}
	};
	
	print_array(a);
	return 0;	
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
