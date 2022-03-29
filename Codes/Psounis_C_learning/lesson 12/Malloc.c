#include <stdio.h>
#include <stdlib.h>

main(){
	int *p;
	p = malloc(sizeof(int));
	if(!p){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
	}
	printf("Dwse ena akeraio arithmo:");
	scanf("%d",p);
	printf("I timi pou pliktrologises einai %d",*p);
}
