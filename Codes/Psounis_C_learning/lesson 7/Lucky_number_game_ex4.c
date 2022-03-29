#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int hidden;
	int x;
 
 	srand((unsigned int)time(NULL));
 	hidden = 1 +rand()%100;
 	printf("\n\nOrisa ena arithmo apo to 1 -100....pame gia ena game! :)");

 do {
  printf("\n\nMANTEPSE TON ARITHMO POU SKEFTIKA!!!\n-->");
  scanf("%d", &x);

  if (x == hidden)
  {
   printf("Mpravw mantespate ton arithmo!!!!!!!\n");
  }
  else if (x > hidden)
  {
   printf("Lathos o arithmos poy valate inei megaliteros apo ton provlepomeno!\n");
  }
  else
  {
   printf("Lathos o arithmos poy valate ine mikroteros apo ton provlepomeno!\n");
  }
 } while (x != hidden);
} 
