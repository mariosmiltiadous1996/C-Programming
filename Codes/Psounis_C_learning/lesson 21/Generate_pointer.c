#include <stdio.h>

main(){
	int x=4;
	double d=1.1;
	void *p;
	p=&x;
	printf("%d",*(int*)p);
	p=&d;
	printf("\n%.3lf",*(double*)p);
}
