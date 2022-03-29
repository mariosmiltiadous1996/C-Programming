#include <stdio.h>

main(){
	int x,y,z;
	
	x=0;
	y=1;
	if(x<y){
		z=0;}
	else{
		z=1;}
	printf("%d",z);
	
	/*isodinama me telesti */
	x=1;
	y=0;
	z=x<y?0:1;
	printf("%d",z);
	
	/*telestis-orisma*/
	printf("%d",x<y?0:1);
	
}
