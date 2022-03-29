#include <stdio.h>

main(){
	float f=10.0/7.0;
	int i,num;
	
	printf("Pragmatikoi Arithmoi:");
	printf("\n%8.3f",f);
	printf("\n%8.4f",f);
	printf("\n%8.5f",f);
	printf("\n%8.6f",f);
	
	printf("\n\nAkeraioi Arithmoi");
	num=1;
	for(i=1; i<=8; i++){
		printf("\n|%-10.d|%10.d",num,num);
		num*=10;	
	}
}
