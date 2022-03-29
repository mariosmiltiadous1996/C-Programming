#include <stdio.h>
#include <stdlib.h>
#define SIZE 150
#define TRUE 1
#define FALSE 0

int check_string(char *str);
int mystrcmp(char *str1,char *str2);

main(){
	int x;
	char str1[SIZE],str2[SIZE];
	printf("Dwse tin prwti le3i: ");
	gets(str1);
	if(check_string(str1)==FALSE){
		printf("Lathos Eisodos!");
		exit(0);}
	
	printf("Dwse tin deuteri le3i: ");
	gets(str2);
	if(check_string(str2)==FALSE){
		printf("Lathos Eisodos!");
		exit(0);}
	
	x=mystrcmp(str1,str2);
	if(x == -1){
	printf("\nIsxyei: %s < %s",str1,str2);
	}
	else if(x == 0){
	printf("\nIsxyei: %s = %s",str1,str2);
	}
	else if(x == 1){
	printf("\nIsxyei: %s > %s",str1,str2);
	}
}

int check_string(char*str){
	int i;
	while(str[i]!='\0'){
		if(!(str[i]>='a' && str[i]<='z')){
			return FALSE;}
		i++;
	}
	return TRUE;
	}

int mystrcmp(char *str1,char *str2){
	int i=0;
	while(1){
		if(str1[i]=='\0' && str2[i]!='\0'){
			return -1;}
		else if(str2[i]=='\0' && str1[i]!='\0'){
			return 1;}
		else if(str1[i]=='\0' && str2[i]=='\0'){
			return 0;}
		
		if (str1[i]<str2[i]){
			return -1;}
		else if (str1[i]>str2[i]){
			return 1;}
		i++;
		}
	}
