#include <stdio.h>

int main()
{
	int q,divi,ds,r;
	
	printf("Enter dividend and divisor:\n");
	scanf ("%d%d",&divi,&ds);
	
	q=divi/ds;
	r=divi%ds;
	
	printf ("quotient:%d\n",q);
	printf ("remainder:%d",r);
	
	return 0;
	
}
