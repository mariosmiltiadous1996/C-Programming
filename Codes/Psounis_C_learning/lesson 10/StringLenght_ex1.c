#include <stdio.h>
#define N 100

int mystrlen(char *s);
main(){
	char str[N];
	printf("Dwse tin symvoloseira:");
	gets(str);
	printf("to mikos tis simvoloseiras einai %d",mystrlen(str));
}

int mystrlen(char *s){
	int cnt=0;
	while(s[cnt]!='\0'){
		cnt++;
	}
	return cnt;
}
