# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define SIZE1 100
#define SIZE2 200

main(){
	int pinakas[SIZE1][SIZE2];
	int M,N;
	int i,j;
	
	do{
		printf("Dwse to plithos ton grammon (10-100):");
		scanf("%d",&M);
		}while(M<10 || M>100);
		
	
	do{
		printf("Dwse to plithos ton stilwn (8-200):");
		scanf("%d",&N);
		}while(N<8 || N>200);
		
	srand(time(NULL));
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			pinakas[i][j]=rand()%100;}
	}
	
	for(i=0; i<M; i++){
		for(j=0; j<N-1; j++){
			printf("%d\t",pinakas[i][j]);}
		printf("%d",pinakas[i][N-1]);
		printf("\n");}	
}
