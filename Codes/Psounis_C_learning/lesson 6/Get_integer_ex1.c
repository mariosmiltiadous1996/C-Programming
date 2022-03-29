#include <stdio.h>

int get_integer(int start,int finish);

main(){
	int a,b,n;
	printf("Dwse to a\n");
	a=get_integer(1,10);
	printf("Dwse to b\n");
	b=get_integer(1,10);
	printf("Dwse to n\n");
	n=get_integer(2,5);
	
	printf("To apotelesma tis pra3is %d*(%d-%d)=%d",n,a,b,n*(a-b));
	
}
int get_integer(int start,int finish){
	
	int x;
	
	do{
		printf("Dwse mia timi apo %d ews %d:",start,finish);
		scanf("%d",&x);
	}while(x<start ||x>finish );
	
	return x;
}
