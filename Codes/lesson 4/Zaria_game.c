#include <stdio.h>

main(){
	int z1a,z1b,z2a,z2b;
	int sum_A,sum_B;
	
	printf("Dvse timi sto 1o zari (1os paiktis):");
	scanf("%d",&z1a);
	printf("Dvse timi sto 2o zari (1os paiktis):");
	scanf("%d",&z1b);
	printf("Dvse timi sto 1o zari (2os paiktis):");
	scanf("%d",&z2a);
	printf("Dvse timi sto 1o zari (2os paiktis):");
	scanf("%d",&z2b);
	
	sum_A=z1a+z1b;
	sum_B=z2a+z2b;
	
	if(sum_A>sum_B)
		{printf("Nikitis o 1os paiktis!");}
	else if(sum_A<sum_B)
		{printf("Nikitis o 2os paiktis!");}
	else
	{printf("Isopalia.. :( ");}
	}
