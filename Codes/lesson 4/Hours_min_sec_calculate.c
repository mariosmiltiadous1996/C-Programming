#include <stdio.h>

main(){
	int x;
	int hours,min,sec;
	
	printf("Dwse deuterolepta:");
	scanf("%d",&x);
	
	hours=x/3600;
	x=x%3600;
	min=x/60;
	sec=x%60;
	
	printf("Ta deuterolepta pou edwses antistoixoun se %d:%d:%d",hours,min,sec);
}
