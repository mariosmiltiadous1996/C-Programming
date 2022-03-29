#include <stdio.h>

int main(){
	int x,y,z;
	int telestis;

	
	printf("Dwse 1o akeraio: ");
	scanf("%d",&x);
	printf("Dwse 2o akeraio: ");
	scanf("%d",&y);
	printf("Dwse telesti:\n0 gia + \n1 gia - \n2 gia *\n3 gia /\n4 gia %%\n\n");
	scanf("%d",&telestis);
	

	printf("----------");
	if(telestis==0){
		z=x+y;
		printf("\n%d+%d=%d",x,y,z);
	}
	else if(telestis==1){
		z=x-y;
		printf("\n%d-%d=%d",x,y,z);
	}
	else if(telestis==2){
		z=x*y;
		printf("\n%d*%d=%d",x,y,z);
	}
	else if(telestis==3){
		z=x/y;
		printf("\n%d/%d=%d",x,y,z);
	}
	else if(telestis==4){
		z=x%y;
		printf("\n%d%%%d=%d",x,y,z);
	}
	return 0;
}
