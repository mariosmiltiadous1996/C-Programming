#include <stdio.h>

int x; //katholiki metavliti
void func();

main(){
	x=1;
	func();
}

void func(){
	int x=5; //local
	printf("Local: x=%d",x);
}
