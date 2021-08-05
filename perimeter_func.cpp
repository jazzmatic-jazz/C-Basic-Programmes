#include <stdio.h>
//perimeter of sqaure 4a
//perimeter of rectangle 2*(l+b)

int sqaure();
int rect();

int square ()
{
	int area,s;
	printf ("Enter the side:\n");
	scanf ("%d",&s);
	area=4*s;
	printf ("perimeter of square:%d\n\n",area);
		

}

int rect()
{
	int area, l, b;
	
	printf ("Enter l and b:\n");
	scanf ("%d\n%d",&l,&b);
	area=2*(l+b);
	printf ("Perimeter of rectangle:%d",area);
	
}

int main ()
{
	int s,area;
	square ();
	rect();
	
}


