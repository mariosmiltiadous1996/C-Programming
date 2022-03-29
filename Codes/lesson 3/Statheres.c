#include <stdio.h>
#define N 100 

main(){
	int i,sum;
	const int number=10;

	for (i=number; i<=N; i++){
		sum= sum+i;
	}
	printf("To athroisma ton arithmovn [%d...%d] eina: %d",number,N,sum);
	
	getchar();
}
