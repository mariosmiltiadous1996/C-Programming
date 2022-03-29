#include <stdio.h>
#include <math.h>

struct point {
	float x,y;
};

void read_point(struct point *p);
float euklidia_apostasi(struct point A,struct point B);

main(){
	struct point A,B;
	printf("..1o Simeio..\n");
	read_point(&A);
	printf("\n");
	printf("..2o Simeio..\n");
	read_point(&B);
	
	printf("\nEuklidia apostasi simeion einai:%.3f ",euklidia_apostasi(A,B));
}

void read_point(struct point *p){
	printf("Dwse tin x syntetagmeni:");
	scanf("%f",&p->x);
	printf("Dwse tin y syntetagmeni:");
	scanf("%f",&p->y);
}

float euklidia_apostasi(struct point A,struct point B){
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
