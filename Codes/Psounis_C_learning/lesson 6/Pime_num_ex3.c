#include <stdio.h>

int isprime(int n);

main(){
	int i,start,finish;
	do{
		printf("Eisagete tin arxi tou diastimatos:");
		scanf("%d",&start);
		if (start<=0)
			printf("Dwsate lathos eisodo.Prepi na einai >0.");	
	}while(start<=0);
	
	do{
		printf("Eisagete to telos tou diastimatos:");
		scanf("%d",&finish);
		if (finish<=0)
			printf("Dwsate lathos eisodo.Prepi na einai >0.");	
		if(finish<start)
			printf("Dwsate lathos telos.Prepi na einai >%d.",start);
	}while(finish<=0);
	
	for (i=start; i<=finish; i++){
		if(isprime(i)==1)
			printf("\nTo %d einai prwtos arithmos.",i);	}
}


int isprime(int n)
{
	int i;
	
	for (i=2; i<n; i++)
	{
		if (n%i==0)
			return 0;
	}
	if (i== n)
		return 1;
}

