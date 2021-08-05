#include <stdio.h>
int main()
{

	int b, h, l;
	
	printf ("Enter the blocks:\n")	;
	scanf ("%d",&b);
	
	while(l<=b)
{
	h=h+1;
	b-=l;
	l+=1;
	
	
}
	printf ("height:%d",h);
	return 0;
}
