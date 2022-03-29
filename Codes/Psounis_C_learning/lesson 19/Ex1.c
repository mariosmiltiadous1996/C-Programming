#include <stdio.h>
#include <math.h>

double f(double x);
main(){
	double d;
	printf("Dwse double:");
	scanf("%lf",&d);
	
	printf("Apotelesma: %lf",f(d));
}

double f(double x){
	return 1/(1+exp(-x));
}
