#include <stdio.h>
#define N 150

main(){
	char str[N];
	int i=0;
	printf("Dwse symvoloseira:");
	gets(str);
	
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	printf("Nea symvoloseira: %s",str);
	
	
}
