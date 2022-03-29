#include <stdio.h>

int radius,area;

int main(){
	printf("Eisagete tin aktina:");
	scanf("%d",&radius);
	area = (int)3.1415*radius*radius;
	printf("\n\n To emvadon einai: %d \n",area);
	
	return 0;
}
