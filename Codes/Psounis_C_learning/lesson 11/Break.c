#include<stdio.h>
#define N 5
main(){
	int i;
	int A[N]={5, 3, 2, 4, 8 };
	int x=2;
	
	for(i=0; i<N; i++)
	{
		if(A[i]==x)
			break;
		
	}
	if(i<N){
		printf("Vrethike to stoixeio %d stin thesi %d",x,i);
	}
	else{
		printf("Den vrethike to stoixeio..");
	}
}
