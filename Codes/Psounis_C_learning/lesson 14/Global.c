#include <stdio.h>

int x; //katholiki metavliti
void func();

main(){
	x=5;
	printf("\nMain: x=%d",x);
	func();
	printf("\nMain: x=%d",x);
}

void func(){
	printf("\nFunc: x=%d",x);
	x=0;
	printf("\nFunc: x=%d",x);
}
