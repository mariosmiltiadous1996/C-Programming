#include <stdio.h>

#define N 5

main()
{
	int pinakas[N];
	int i;
	int prod;
	
	for(i=0; i<N; i++)
	{
		do
		{
			printf("Eisagete ton%d-o arithmo: ",i+1);
			scanf("%d",&pinakas[i]);
		}while (pinakas[i]<1 || pinakas[i]>8);
	}
	
	prod=1;
	for(i=0; i<N; i++)
	{
		prod=prod*pinakas[i];
	}
	
	printf("To ginomeno twn arithmwn einai: %d",prod);
	
}
