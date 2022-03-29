#include <stdio.h>
#define N 80

struct person {
	char onoma[N];
	char dieuthinsi[N];
	char arithmos[N];
	char nomos[N];
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);

main(){
	RECORD a,b;
	printf("---1o atomo---\n");
	read_record(&a);
	printf("---2o atomo---\n");
	read_record(&b);
	
	print_record(a);
	print_record(b);
}

void read_record(RECORD *p){
	printf("Dwse onoma:");
	scanf("%s",p->onoma);
	printf("Dwse dieuthinsi:");
	scanf("%s",p->dieuthinsi);
	printf("Dwse arithmo:");
	scanf("%s",p->arithmos);
	printf("Dwse nomos:");
	scanf("%s",p->nomos);
	}
	
void print_record(RECORD x){
	printf("\n%s: %s %s %s ",x.onoma,x.dieuthinsi,x.arithmos,x.nomos);
}
