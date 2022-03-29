#include <string.h>
#include <stdio.h>

 





	int main()
	{
    		FILE *ptr_file;
    		char buf[1000],i;

    		ptr_file =fopen("input.txt","r");
    		if (!ptr_file)
        		return 1;

    		while (fgets(buf,1000, ptr_file)!=NULL){
        		printf("%s",buf);
        	    for(i=0; buf[i]!='\0'; ++i);
   				 printf("Length of string: %d",i);	
        	}

		fclose(ptr_file);
		wordFinder();
		
		    char s[1000];
		    int i;
    printf("Enter a string: ");
    scanf("%s",s);
    for(i=0; s[i]!='\0'; ++i);
    printf("Length of string: %d",i);
    		return 0;
	}
