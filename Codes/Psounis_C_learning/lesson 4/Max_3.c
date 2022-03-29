#include <stdio.h>

main(){
	int x,max;
	printf("Dwse ena arithmo:");
	scanf("%d",&x);
	max=x;
	printf("Dwse deutero arithmo:");
	scanf("%d",&x);
	if(x>max)
		max=x;
	printf("Dwse deutero arithmo:");
	scanf("%d",&x);
	if(x>max)
		max=x;
		
	printf("O megalyteros arithmos einai:%d",x);

}
