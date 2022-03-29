#include <stdio.h>
#include <stdlib.h>

main(){
	double **p; //diwsi diplou dikti pinka
	int i,j,M,N;
	printf("Dwse to plithos twn grammwn tou pinaka:");
	scanf("%d",&M);
	printf("Dwse to plithos twn stilwn tou pinaka:");
	scanf("%d",&N);
	
	/*Desmeysi grammon kai stilwn*/
	p=malloc(sizeof(double*)*M);
	if(!p){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
	}
	for(i=0; i<M; i++){
		p[i]=malloc(sizeof(double*)*N);
		if(!p[i]){
			printf("Adynamia desmeusis mnimis..");
			exit(0);
		}
	}
	/*Ektelesi pra3is*/
	printf("O xwros pou desmeutike einai :%d + %d + %d = %d",M*N*sizeof(double),N*sizeof(double*),sizeof(double**),
			M*N*sizeof(double)+N*sizeof(double*)+sizeof(double**));
	
	/*Apodesmeusi mnimis*/
	
	for(i=0; i<M; i++){
		free(p[i]);
	}
	free(p);
}
