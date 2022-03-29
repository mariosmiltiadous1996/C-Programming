#include <stdio.h>


main(){
	int pinakas[20];
	int i,sum;
	int N;
	float average;
	
	do{
		printf("Dwse to N:");
		scanf("%d",&N);
	}while(N<1 || N>20);
	
	for(i=0; i<N; i++){
		printf("Dwse ton %d-o arithmo:",i+1);
		scanf("%d",&pinakas[i]);
	}
	
	sum=pinakas[0];
	
	for(i=1; i<N; i++){
		sum=sum+pinakas[i];}
	
	average=sum/(float)N;
	printf("O mesos oros ton arithmwn einai:%f",average);
}
