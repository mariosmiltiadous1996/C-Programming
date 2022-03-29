#include <stdio.h>
#define N 80

struct person {
	char *onoma;
	char *dieuthinsi;
	char *arithmos;
	char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);
void free_record(RECORD x);

main(){
	RECORD a,b;
	init_record(&a);
	init_record(&b);
	printf("---1o atomo---\n");
	read_record(&a);
	printf("---2o atomo---\n");
	read_record(&b);
	
	print_record(a);
	print_record(b);
	
	free_record(a);
	free_record(b);
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

void init_record(RECORD *p){
	p->onoma =malloc(sizeof(char)*N);
	if(!p->onoma){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
		}
	
	p->dieuthinsi=malloc(sizeof(char)*N);
	if(!p->dieuthinsi){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
		}
	
	p->arithmos=malloc(sizeof(char)*N);
	if(!p->arithmos){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
		}
	
	p->nomos=malloc(sizeof(char)*N);
	if(!p->nomos){
		printf("Adynamia desmeusis mnimis..");
		exit(0);
		}
	}
	
void free_record(RECORD x){
	free(x.onoma);
	free(x.dieuthinsi);
	free(x.arithmos);
	free(x.nomos);
}
