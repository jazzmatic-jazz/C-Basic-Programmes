#include <stdio.h>

int main()
{
	int n,r,rvs=0,d,z,i;
	
//	printf ("Enter the total digits:\n");
//	scanf ("%d",&z);
	
	printf ("Enter the number to check:\n");
	scanf ("%d",&n);
	
	if (n!=0)
	{
		r=n%10;
		d=n/10;
		rvs=rvs*10+r;
	//	printf ("%d\n",rvs);
	}
	
	for (i=0; i<5;i++)
	{
		if (d!=0)
		{
			r=d%10;
			d=d/10;
			rvs=rvs*10+r;
		
		}
		
	}
	printf ("%d\n",rvs);
	
	if (n==rvs)
	{
		printf ("It is the palindrome");
	}
	else
	{
		printf ("It is not!!");
	}
}
