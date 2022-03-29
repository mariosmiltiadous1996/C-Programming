#include <stdio.h>

void f1();
void f2();

int x;

main(){
	int a=0;
	x=5;
	printf("\nmain: a=%d, x=%d",a,x);
	f1();
	printf("\nmain: a=%d, x=%d",a,x);
	f2();
	printf("\nmain: a=%d, x=%d",a,x);
}

void f1(){
	int a=2,x=0;
	printf("\nf1: a=%d, x=%d",a,x);
	}

void f2(){
	int a=8;
	x=7;
	printf("\nf2: a=%d, x=%d",a,x);
}
