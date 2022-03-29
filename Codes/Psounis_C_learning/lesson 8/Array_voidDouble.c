#include <stdio.h>
#define N 100
void f(int *p,int n);

main(){
	int p[N];
	int i;
	for(i=0; i<N; i++){
		p[i]=i;	
		}
	
	for(i=0; i<N; i++){
		printf("%d",p[i]);
		}
	
	f(p,N);
	printf("\n\n");
	for(i=0; i<N; i++){
		printf("\%d",p[i]);
		}
}

void f(int *p,int n){
	int i;
	for(i=0; i<N; i++){
		p[i]=2*i;	
		}
}
