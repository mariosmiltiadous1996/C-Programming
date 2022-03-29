#include <stdio.h>


main(){
	int pinakas[20];
	int i,min;
	int N;
	
	do{
		printf("Dwse to N:");
		scanf("%d",&N);
	}while(N<2 || N>20);
	
	for(i=0; i<N; i++){
		printf("Dwse ton %d-o arithmo:",i+1);
		scanf("%d",&pinakas[i]);
	}
	
	min=pinakas[0];
	
	for(i=1; i<N; i++){
		if(pinakas[i]<min){
			min=pinakas[i];}
	}
	printf("o elaxistos arithmos einai:%d",min);
}
