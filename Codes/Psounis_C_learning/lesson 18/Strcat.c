#include <stdio.h>
#include <string.h>
#define N 80
 
main(){
	char str1[N], str2[N];
	printf("Dwse tin 1i symvoloseira: ");
	gets(str1);
	printf("Dwse tin 2i symvoloseira: ");
	gets(str2);
	
	strcat(str1,str2);
	printf("Str1:%s\nStr2:%s",str1,str2);
}
