#include <stdio.h>

int fibonacci(int n);

main(){
	int n;
	printf("Dwse ton arithmo: ");
	scanf("%d",&n);
	
	printf("\nO fibonacci number %d einai:%d",n,fibonacci(n));
}

int fibonacci(int n){
	static int count=0;
	count++;
	printf("\nAnadromi:%d",count);
	if(n==1 ||n==2){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
