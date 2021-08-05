#include <stdio.h>
int main ()
{
	int n,t,i,j;
	scanf ("%d",&t);
	
	while (t>0)
{	scanf ("%d",&n);
	
	for (i=n;i>1 ;i--)
{	
	//printf ("%d",n);
	
	if (i==n)
{	n=i*(i-1);				}
	
	else 
			
{		n*=i-1;				}


}	
	
	printf ("%d",n);
	t--;

	
}	
	
	
	
	
	return 0;
}
