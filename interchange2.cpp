#include <stdio.h>
//a=b,b=c,c=a
int main ()
{
	int a,b,c,d,e,f;
	printf ("Enter the value:\n");
	scanf ("%d%d%d",&a,&b,&c);
	//a=5 b=6 c=7
	
	d=b; // b value in d
	b=a; // b value in a
	a=c; // c value in b
	c=d;
		
	printf ("interchanged values: %d%d%d",a,b,c,d);
	
	
	
	
	return 0;
}
