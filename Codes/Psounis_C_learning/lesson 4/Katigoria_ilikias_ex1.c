#include <stdio.h>

main(){
	int x;
	printf("Poso xronon eisai:");
	scanf("%d",&x);
	
	if (x<18)
		printf("Eisai anilikos");
	else if(18<=x && x<65){
				printf("Eisai enilikos");}
	else
		{printf("Eisai sinta3iouxos");}
}
