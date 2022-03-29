#include <stdio.h>
#include <stdlib.h>

int Prime(int n)
{
	int divisors, i;
	divisors = 0;
	for (i=1;i<=n;i++) 
	{
		if (n % i == 0) divisors++;
	}
	if(divisors==2) return 1;
	return 0;
		
}

int main(int argc, char *argv){

	int n;
	int flag;
	while(1)
	{
		printf("DWSE ARITHMO: ");
		scanf("%d",&n);

		flag = Prime(n);
		if(flag) printf("PRIME\n");
		
	}

	return 0;
}

