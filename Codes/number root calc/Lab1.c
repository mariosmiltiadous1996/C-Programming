
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sq();


void main(void) {
	 int i;
	 for(i=1;i<=5;i++){
	 sq();}
	
	 	

			
}

int sq(){
	double num;
	int x;
	printf("Dwse ena arithmo:");
	scanf("%d",&x);
	num=sqrt(x);
	printf("%f\t",num);
	if(num==(int)num){
	
		printf("Einai tetragwno arithmou return 1\n");
		return 1;}
	else {
		printf("Den einai tetragwno arithmou return 0\n");
		return 0;}
	
}


