#include <stdio.h>
#include <time.h>

long fib(int n);
main(){
	int i;
	clock_t c1,c2;
	for(i=1; i<=50; i++){
		c1=clock();
		printf("Fib(%d)=%ld",i,fib(i));
		c2=clock();
		
		printf("\t Time: %lf\n",(double)(c2-c1)/CLOCKS_PER_SEC);
	}
}

long fib(int n){
	if(n==1 || n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
