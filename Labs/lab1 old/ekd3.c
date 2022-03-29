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

	int i, n = 2, c = 0, c1 = 0;
	int flag;
	int P[10000];
	while(n < 10000)
	{
		flag = Prime(n);
		if(flag)
		{
			P[c] = n;
			c++;
		}
		n++;
	}
	for(i = 1; i < c; i++)
	{
		if(P[i] == P[i-1] + 2)
		{
			printf("%d %d\n", P[i-1], P[i]);
			c1++;
		}
	}
	printf("\nOI PRWTOI DIDIMOI ARITHMOI EINAI:%d\n", c1);

	return 0;
}

