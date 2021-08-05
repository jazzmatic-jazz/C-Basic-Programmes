#include <stdio.h>
#include <math.h>

int main()
{
	int i,a,r,n,t,p;
	
	scanf ("%d%d%d%d%d",&p,&r,&n,&t);
	
	i= p*pow((1+(r/100)),(n*t));
	i=p*(1+r*t);
	
	printf ("Enter 1. for compound interest\n2. for simple interest");	
	
	switch (i)
{		case 1: printf ("Compound interest is %d");
		
		case 2: printf ("Simple interest is %d");				}
	
	
	return 0;
}
