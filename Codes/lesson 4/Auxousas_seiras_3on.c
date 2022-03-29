#include <stdio.h>

main()
{
 int a, b, c;
 int min, mid, max;
 
 printf("Eisagete ton 1o arithmo: ");
 scanf("%d",&a);
 
 max = a;
 
 
 printf("Eisagete ton 2o arithmo: ");
 scanf("%d",&b);
 
 if (b > max)
  {
  min = max;
  max = b;
  }
 else 
  min = b;
  
  
 printf("Eisagete ton 3o arithmo: ");
 scanf("%d",&c);
 
 if (c > max)
  {  
  mid = max;
  max = c;
  }
 else if (c < max && c > min)
  mid = c;
 else
  {
  mid = min;
  min = c;
  }

  
  
 printf("H diataksi einai: %d, %d, %d",min,mid,max); 
}
