#include <stdio.h>

main(){
	int x,y;
	printf("Dwse ena arithmo:");
	scanf("%d",&x);
	printf("Dwse deutero arithmo:");
	scanf("%d",&y);
	
	if (x>y)
		printf("O megalyteros arithmos einai:%d",x);
	else if(x==y)
		printf("Exoume idious arithmous:%d=%d",x,y);
	else
		printf("O megalyteros arithmos einai:%d",y);
}
