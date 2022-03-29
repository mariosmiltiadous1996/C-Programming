#include <stdio.h>

main(){
	int i,sum,x;
	sum=0;
	
	for(i=1; i<=10; i++){
		printf("Dwse ton %d-o aritmo:",i);
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("\n\n%d",sum);
	
}
