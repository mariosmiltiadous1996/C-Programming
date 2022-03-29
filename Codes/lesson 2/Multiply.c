#include <stdio.h>

int a,b,c;
int ginomeno(int x,int y);

main () {
	printf("Eisagete ena arithmo metaksi 1 kai 100:");
	scanf("%d",&a);
	printf("Eisagete akomi ena arithmo metaksi 1 kai 100:");
	scanf("%d",&b);
	
	c = ginomeno(a,b);
	printf("To ginomeno tou %d kai tou %d einai: %d",a,b,c);
	
}

int ginomeno (int x,int y){
	return (x*y);
}
