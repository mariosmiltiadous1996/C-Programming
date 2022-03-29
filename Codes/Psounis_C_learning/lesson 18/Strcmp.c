#include <stdio.h>
#include <string.h>
#define N 80
 
main(){
	int res;
	char str1[N], str2[N];
	printf("Dwse tin 1i symvoloseira: ");
	gets(str1);
	printf("Dwse tin 2i symvoloseira: ");
	gets(str2);
	
	res=strcmp(str1,str2);
	if(res<0){
		printf("i 2i symvoloseira einai megaliteri.");}
	else if(res==0){
		printf("Edoses ises symvoloseires");}
	else{
		printf("i 1i symvoloseira einai megaliteri.");}
	
}
