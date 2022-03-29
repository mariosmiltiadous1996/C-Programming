#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *fp;
	int x=1;
	fp=fopen("text.txt","w");
	if(fp==NULL){
		printf("Lathos sto anoigma arxeiou");
		exit(0);
	}
	fprintf(fp,"Mia grammi\n");
	fprintf(fp,"Kai kapoioi arithmoi: %d %d %d",x,x*5,x/2);
	fclose(fp);
}
