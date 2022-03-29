#include <stdio.h>

main(){
	int N;
	int i,j;
	
	N=5;
	
	for(i=0; i<=N; i++)
	{
		for(j=i; j<=N; j++){		
			printf("%d",i);
		}
		printf("\n");
}
}
