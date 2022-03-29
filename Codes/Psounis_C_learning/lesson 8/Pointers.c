#include <stdio.h>

main(){
	int x;
	int *ptr;
	ptr=&x;
	x=5;
	
	printf("x=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
	*ptr=8;
	printf("\n\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
	x=9;
	printf("\n\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
}
