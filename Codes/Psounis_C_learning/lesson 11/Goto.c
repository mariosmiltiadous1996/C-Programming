#include<stdio.h>
#define N 5
main(){
	int i=0;
	label:
		printf("\ni=%d",i);
	
	if(i<5){
		i++;
		goto label;
	}
}
