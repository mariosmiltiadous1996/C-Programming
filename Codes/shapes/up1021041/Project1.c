#include <stdio.h>
#include <math.h>

void tetragono(int a);
void parallilogrammoDeksia(int a);
void parallilogrammoAristera(int a);
void diploTetragono(int a);
void panoTokso(int a);
void katoTokso(int a);
int roundTo3(int a);

int main()
{
	int choice=0, h;
	
	do
	{
		
		if (choice>6 || choice<1) printf("Edoose lathos epilogi\n\n");
		printf("1=Tetragono\n");
		printf("2=Parallilogrammo Deksia\n");
		printf("3=Parallilogrammo Aristera\n");
		printf("4=Diplo Tetragono\n");
		printf("5=Pano Tokso\n");
		printf("6=Kato Tokso\n");
		printf("Dose arithmo tou sximatos pou thes: ");
		scanf("%d",&choice);
	} while (choice>6 || choice<1);
	
	printf("Dose ipsos: ");
	scanf("%d",&h);
	
	switch (choice)
	{
		case 1: 
			tetragono(h);
			break;
		case 2: 
			parallilogrammoDeksia(h);
			break;
		case 3: 
			parallilogrammoAristera(h);
			break;
		case 4:
			diploTetragono(h);
			break;
		case 5:
			panoTokso(h);
			break;
		case 6:
			katoTokso(h);
			break;
	}
}

void tetragono(int a)
{
	int i,j;
	printf("Tetragono\n\n");
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	for(i=2;i<a;i++)
	{
		printf("*");
		for(j=2;j<a;j++)
		printf(" ");
		printf("*\n\n");
	}
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
}

void parallilogrammoDeksia(int a)
{
	int i,j; 
	a;
	int y = a;
	printf("Parallilogrammo Deksia\n\n");

	for(i=1;i<y;i++)
	printf(" ");
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	
	for(i=2;i<a;i++)
	{
			for(j=2;j<y;j++) printf(" ");
		printf("*");
		for(j=2;j<a;j++) printf(" ");
		printf("*\n\n");
		y--;
	}
	
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
}

void parallilogrammoAristera(int a)
{
	int i,j; 
	int y = 1;
	printf("Parallilogrammo Aristera\n\n");
	
	for(i=1;i<y;i++)
	printf(" ");
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	y++;
	
	for(i=2;i<a;i++)
	{for(j=1;j<y;j++) 
		printf(" ");
		printf("*");
		for(j=2;j<a;j++) 
		printf(" ");
		printf("*\n\n");
		y++;
	}
	
	for(i=1;i<y;i++)
	printf(" ");
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
}

void diploTetragono(int a)
{
	int i,j,y;
	printf("Diplo Tetragono\n\n");	
	a = roundTo3(a);
	y = a/2;
	
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	for(i=2;i<y;i++)
	{
		printf("*");
		for(j=2;j<a;j++)
		printf(" ");
		printf("*\n\n");
	}
	for(i=0;i<a;i++)
	printf("*");
	printf("\n");
	
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	for(i=2;i<y;i++)
	{
		printf("*");
		for(j=2;j<a;j++)
		printf(" ");
		printf("*\n\n");
	}
	for(i=0;i<a;i++)
	printf("*");
	printf("\n");
}

void panoTokso(int a)
{
	int i,j,y,z,spaces1,spaces2;
	printf("Kato Tokso\n\n");
	a = roundTo3(a);
	z = a/2;
	y = a/3;
	spaces1 = z;
	spaces2 = 0;

	if (a%2 == 1) 
	{
	 	for(j=0;j<spaces1;j++)
		 printf(" ");
		printf("*\n\n");
		spaces1 --;
		spaces2 ++;
	}
	for(i=1;i<z;i++)
	{
		
		for(j=0;j<spaces1;j++)
		printf(" ");
		printf("*");
		for(j=0;j<spaces2;j++)
		printf(" ");
		printf("*\n\n");
		spaces1 --;
		spaces2 +=2;	
	}
	for(j=0;j<spaces1;j++)
	printf(" ");
	for(i=0;i<a;i++) printf("*");
	printf("\n\n");
	
	for(j=0;j<z;j++)
	{
		for(i=0;i<spaces1;i++)
		printf(" ");
		for(i=1;i<z;i++)
		printf(" ");
		printf("**\n\n");
	}
}

void katoTokso(int a)
{
	int i,j,y,z,spaces1,spaces2;
	printf("Kato Tokso\n\n");
	a = roundTo3(a);
	z = a/2;
	y = a/3;
	spaces1 = 1;
	spaces2 = a-4;
	
	for(j=0;j<z;j++)
	{
		for(i=1;i<z;i++)
		printf(" ");
		printf("**\n\n");
	}

	
	for(i=0;i<a;i++)
	printf("*");
	printf("\n\n");
	for(i=1;i<z;i++)
	{
		
		for(j=0;j<spaces1;j++)
		printf(" ");
		printf("*");
		for(j=0;j<spaces2;j++)
		printf(" ");
		printf("*\n\n");
		spaces1 ++;
		spaces2 -= 2;	
		
	}
	
 	if (a%2 == 1) 
	{
	 	for(j=0;j<spaces1;j++)
		 printf(" ");
		printf("*");
	}	
}

int roundTo3(int a)
{
	int r,rX,rY,dXX,dYY;
	
	if (a%3==0) return a;
	
	rX = a%3;
	rY = (a+1)%3;
	
	printf("rx = %d\n",rX);
	printf("ry = %d\n",rY);
	
	dXX = abs(a-rX);
	dYY = abs(a-rY);
	
	printf("dxx = %d\n",dXX);
	printf("dyy = %d\n",dYY);
	
	if (dXX<dYY) 
		r = a+3-rX;
	else
		r= a-rX;
		
	printf("O arithmos egine %d\n\n",r);
	
	return r;
}

