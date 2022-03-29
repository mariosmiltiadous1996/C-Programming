#include <stdio.h>
#include <string.h>
#define N 80
 
main(){
	char str1[N], str2[N];
	printf("Dwse tin symvoloseira: ");
	gets(str1);
	strcpy(str2,str1);
	printf("Str1:%s\nStr2:%s",str1,str2);
}
