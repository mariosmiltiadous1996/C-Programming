#include <stdio.h>
#include <stdlib.h>

main(){
	int *p;
	int i,N;
	printf("Dwse tin diastasi tou pinaka: ");
	scanf("%d",&N);
	
	p = malloc(sizeof(int));
	if(!p){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
	}
	for(i=0; i<N; i++){
		p[i]=i*i*i;
		printf("\np[%d]=%d",i,p[i]);
	}
	
	free(p);
}
