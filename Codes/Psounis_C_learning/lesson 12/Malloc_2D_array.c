#include <stdio.h>
#include <stdlib.h>

main(){
	int **p; //diwsi diplou dikti pinka
	int i,j,M,N;
	printf("Dwse to plithos twn grammwn tou pinaka:");
	scanf("%d",&M);
	printf("Dwse to plithos twn stilwn tou pinaka:");
	scanf("%d",&N);
	
	/*Desmeysi grammon kai stilwn*/
	p=malloc(sizeof(int*)*M);
	if(!p){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
	}
	for(i=0; i<M; i++){
		p[i]=malloc(sizeof(int*)*N);
		if(!p[i]){
			printf("Adynamia desmeusis mnimis..");
			exit(0);
		}
	}
	/*Ektelesi pra3is*/
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			p[i][j]=1+(i+j)%5;
			printf("%2d",p[i][j]);
		}
		printf("\n");
	}
	
	/*Apodesmeusi mnimis*/
	
	for(i=0; i<M; i++){
		free(p[i]);
	}
	free(p);
}
