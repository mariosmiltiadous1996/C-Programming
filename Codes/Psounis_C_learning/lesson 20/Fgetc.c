#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *fp;
	char c;

	fp=fopen("text.txt","r");
	if(fp==NULL){
		printf("Lathos sto anoigma arxeiou");
		exit(0);
	}
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
