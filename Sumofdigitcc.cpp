#include <stdio.h>

int main ()
{
	int n, T,r,sum;
		
	scanf ("%d",&T);

	
	while (T>0)
{	scanf ("%d",&n);

		while (n!=0)
	{	
		r=n%10;
		sum=sum+r;
		n=n/10;				
	}

	T--;
		
	printf ("%d",sum);	
	sum=0;

}

	
	return 0;
}
