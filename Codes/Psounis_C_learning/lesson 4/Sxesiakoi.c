#include <stdio.h>

main(){
	int x=1;
	int y=2;
	int z;
	
	printf("\nx=%d,y=%d",x,y);
	
	z=(x>y);
	printf("\nx>y:%d",z);
	z=(x>=y);
	printf("\nx>=y:%d",z);
	z=(x==y);
	printf("\nx==y:%d",z);
	z=(x<=y);
	printf("\nx<=y:%d",z);
	z=(x<y);
	printf("\nx<y:%d",z);
}
