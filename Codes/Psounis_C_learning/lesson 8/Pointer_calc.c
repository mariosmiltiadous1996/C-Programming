#include <stdio.h>
#define N 10

main(){
	int pin[N];
	int i;
	int *ptr;
	ptr=pin; //to ptr pernei tin dieuthisi pin[0]
	
	for (i=0; i<N; i++){
		printf("\nElement:pin[%d],\tAddress of Element:%d",i,&pin[i]);
		ptr++;
	}
}
