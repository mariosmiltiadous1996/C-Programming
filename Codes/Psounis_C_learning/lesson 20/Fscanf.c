#include <stdio.h>
#include <stdlib.h>
#define N 100
 
struct point {
	int x;
	int y;
};

main(){
	FILE *fp;
	int i,n;
	struct point points[N];
	fp=fopen("points.txt","r");
	if(fp==NULL){
		printf("Lathos sto anoigma arxeiou");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	for(i=0; i<n; i++){
		fscanf(fp,"%d%d",&points[i].x, &points[i].y);
	}
	fclose(fp);
	for(i=0; i<n; i++){
		printf("%d\t%d\n",points[i].x ,points[i].y);
	}
}
