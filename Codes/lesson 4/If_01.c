#include <stdio.h>

main(){
	int x,y;
	printf("Dwse ton akeraio x: ");
	scanf("%d",&x);
	printf("Dwse ton akeraio y: ");
	scanf("%d",&y);
	
	if(x>y)
		{printf("\n%d>%d",x,y);}
	if(x>=y)
		{printf("\n%d>=%d",x,y);}
	if(x<y)
		{printf("\n%d<%d",x,y);}
	if(x<=y)
		{printf("\n%d<=%d",x,y);}
	if(x==y)
		{printf("\n%d==%d",x,y);}
}
