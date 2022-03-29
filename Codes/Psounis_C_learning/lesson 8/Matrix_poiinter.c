#include <stdio.h>
#define N 4

main(){
	int pin[N];
	int i;
	
	for (i=0; i<N; i++){
		printf("\nElement:pin[%d],\tAddress of Element:%d",i,&pin[i]);
	}
}
