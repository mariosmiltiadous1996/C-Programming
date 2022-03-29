#include <stdio.h>

main(){
	int x,y;
	printf("Dwse mia akeraia timi sto x: ");
	scanf("%d",&x);
	printf("Dwse mia akeraia timi sto y: ");
	scanf("%d",&y);
	
	if (x<y)
		{printf("Isxyei x<y");}
	else
		{
		if(x==y)
			{printf("Isxyei to x==y");}
		else 
			{printf("Isxyei x>y");}
		}
}
