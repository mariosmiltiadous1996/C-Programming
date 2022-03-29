#include <stdio.h>

int mkd(int a,int b);
main(){
	int a,b;
	printf("Dwse ton 1o arithmo:");
	scanf("%d",&a);
	printf("Dwse ton 2o arithmo:");
	scanf("%d",&b);
	
	printf("\nO MKD twn 2 arithmwn einai:%d",mkd(a,b));
	}
	
int mkd(int a,int b){
	printf("\n%d %d",a,b);
	if(a==b){
		return a;
	}
	else if(a<b){
		return mkd(a,b-a);
	}
	else{
		return mkd(a-b,b);
	}
	
}
