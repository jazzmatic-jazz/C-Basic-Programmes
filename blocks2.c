#include <stdio.h>
int main()
{
	int h=0, b, l=0;
	printf ("Enter the blocks:\n");
	scanf ("%d",&b);
	
	while (b>h)
	{
		h+=1;
		b-=h;		
	}
	printf ("%d",h);
}
