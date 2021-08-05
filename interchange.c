#include <stdio.h>

int main()//a=b,b=c,c=a
{
	int a,b,c,d;
	printf ("Enter the two variables:\n");
	scanf ("%d%d%d",&a,&b,&c);
	
d=a;
a=b;
b=c;
c=d;
	    
	printf("interchanged value%d%d%d",a,b,c,d);
	
	
	return 0;
}
