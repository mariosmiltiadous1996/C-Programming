#include <stdio.h>
#include <stdlib.h>

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
	RECORD *pinakas;
	int i,M;
	printf("Dwse to plithos egrafwn:");
	scanf("%d",&M);
	pinakas=malloc(sizeof(RECORD)*M);
	
	if(!pinakas){
		printf("Adynamia desmeusis mnimis");
		exit(0);	
	}
	
	for(i=0; i<M; i++){
		init_record(&pinakas[i]);}
	
	for(i=0; i<M; i++){
		printf("%do atomo.",i+1);
		read_record(&pinakas[i]);}
		
	for(i=0; i<M; i++){
		print_record(pinakas[i]);}
	free(pinakas);
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
