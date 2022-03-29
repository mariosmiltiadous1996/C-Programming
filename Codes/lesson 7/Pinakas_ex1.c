#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

main(){
	int pinakas[SIZE];
	int i,N;
	
	do{
		printf("Dwse to plithos ton stoixeiwn (20-100):");
		scanf("%d",&N);
		}while(N<20 || N>100);
		
	srand(time(NULL));
	for(i=0; i<N; i++){
		pinakas[i]=rand()%1000;
	}
	
	printf("[");
	for(i=0; i<N-1; i++){
		printf("%d,",pinakas[i]);}
	printf("%d]",pinakas[i]);
	
}
