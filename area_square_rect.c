#include<stdio.h>
#define SQUARE(s) s*s
#define	RECT(l,b) l*b


//perimeter of sqaure 4a
//perimeter of rectangle 2*(l+b)

int sqaurep();
int rectp();

int squarep ()
{
	int perimeter,s;
	printf ("Enter the side for sqaure:\n");
	scanf ("%d",&s);
	printf ("\n");
	perimeter=4*s;
	printf ("Perimeter of square:%2d\n\n",perimeter);
		

}

int rectp()
{
	int perimeter, l, b;
	
	printf ("Enter length and breadth:\n");
	scanf ("%d\n%d",&l,&b);
	printf ("\n");
	perimeter=2*(l+b);
	printf ("Perimeter of rectangle:%d\n\n",perimeter);
	
}



int main()
{
	int area,s,l,b;
	
	printf ("PERIMETERS....\n\n");
	printf ("SQUARE\n\n");
	squarep ();
	printf ("RECTANGLE\n\n");
	rectp();
	
	printf ("Areas......\n\n");
	printf ("SQUARE\n\n");
	
	printf ("Enter the sides:\n");
	scanf ("%d",&s);
	area=SQUARE(s);
	printf ("The area of square is:%d\n",area);
	
	printf ("RECTANGLE\n\n");
	
	printf ("Enter the legnth and breadth:\n");
	scanf ("%d%d",&l,&b);
	area=RECT(l,b);
	printf ("The area of rectangle is:%d\n",area);	
	
	
return 0;
}


