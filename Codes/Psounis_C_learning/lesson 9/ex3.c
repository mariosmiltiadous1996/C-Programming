#include <stdio.h>

main(){
	int i,j,k;
	int N=5;
	
	for(i=5; i>=1; i--){
		//for(k=1; k<=3; k++){
			for(j=1; j<=i; j++){
				printf("%d",i);}
			for(j=1; j<=N-i; j++){
				printf("  ");}
			for(j=i; j>=1; j--){
				printf("%d",i);}
			//}
		printf("\n");
		
	}
}
