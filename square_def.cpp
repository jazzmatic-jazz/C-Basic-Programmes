#include<stdio.h>
#define SQUARE(s) s*s
#define	RECT(l,b) l*b

int main()
{
	int area,s,l,b;

	printf ("For square enter the sides:\n");
	scanf ("%d",&s);
	area=SQUARE(s);
	printf ("The area of square is:%d\n",area);
	
	printf ("For rectan enter the sides:\n");
	scanf ("%d%d",&l,&b);
	area=RECT(l,b);
	printf ("The area of rectangle is:%d\n",area);
	
	
return 0;
}

