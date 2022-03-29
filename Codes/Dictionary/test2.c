#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch[50];
	int a;

		printf("1:metrisi lekseon\n");
		printf("2:diaforetikes leksis\n");
		printf("3:grammata lekseon\n");
	
		printf("dose arithmos:");
		scanf("%d",&a);
		printf("dose keimeno:");
		scanf("%s", &ch);
	

	
		switch(a) {
			case 1:
				{	printf("arithmos lekseon:\n");
					printf("arithmos xaraktiron:\n");
					break;
				}
			case 2:
				{
					printf("arithmos diaforetikon lekseon:\n");
					break;
				}	
			case 3:
				{
					printf("grammata leksis:\n");
					break;
				}
		}

	
	
	return 0;
}

