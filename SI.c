#include<stdio.h>
int main()
{

	int p=1	, n=2;
	float r=8.5,si;
	
	scanf ("%d %d",&p,&n);
	printf ("%d %d %f",p,n,r);	
	printf ("Prin=%d \n Rate= %f",p,r);
   	si= p*n*r/100;
	printf ("\n Simple interest=$ %f",si);
	
	return 0;
	
}

