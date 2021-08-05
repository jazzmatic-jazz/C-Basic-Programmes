#include <stdio.h>
int func(int x, int y);// actual parameters

int func(int x,int y)
{
	x=20;
	y=10;
	printf ("%d\n%d\n",x,y);
}

int main()
{
	int x,y;
	x=10;
	y=20;
	func(y,x);
 printf ("%d\n%d\n",x,y);
}
