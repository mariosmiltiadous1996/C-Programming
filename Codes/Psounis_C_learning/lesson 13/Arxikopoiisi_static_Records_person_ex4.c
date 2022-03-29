#include <stdio.h>
#define N 3

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
	RECORD pinakas[N];
	int i;
	
	for(i=0; i<N; i++){
		init_record(&pinakas[i]);}
	
	for(i=0; i<N; i++){
		printf("%do atomo.",i+1);
		read_record(&pinakas[i]);}
		
	for(i=0; i<N; i++){
		print_record(pinakas[i]);}
	
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
