#include <stdio.h>
#define N 100

char *mystrcpy(char *dest, char * src);

main(){
	char str1[N], str2[N], str3[N];
	int choice;
	
	printf("Dwse tin 1i symvoloseira:");
	gets(str1);
	printf("Dwse tin 2i symvoloseira:");
	gets(str2);
	
	printf("Dwse tin symvoloseira antigefis(1 i 2):");
	scanf("%d",&choice);
	
	if (choice==1){
		mystrcpy(str3,str1);}
	else if(choice==2){ 
		mystrcpy(str3,str2);}
	
	printf("\n\n1: %s \n2: %s \n3: %s",str1,str2,str3);
}

char *mystrcpy(char *dest,char *src){
	int i=0;
	while(1){
		dest[i]=src[i];
		if(src[i]=='\0'){
			break;}
		i++;}
		return dest;
	}

