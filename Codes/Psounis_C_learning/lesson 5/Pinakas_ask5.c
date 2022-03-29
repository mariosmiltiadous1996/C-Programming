#include <stdio.h>
#define SIZE 10

main(){
	
	int pinakas[SIZE];
	int i;
	int sum=0;
	 
	for(i=0; i<SIZE; i++)
	{
		printf("Dwse ton %d- o arithmo :", i+1);
		scanf("%d",&pinakas[i]);
		
		sum=sum+pinakas[i];
	
	}
	
	printf("To athrisma twn %d stoixeiwn pou edvses einai:%d",SIZE,sum);
}
