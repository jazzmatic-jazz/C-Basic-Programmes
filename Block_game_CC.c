#include<stdio.h>

int main()
{
	int n, t, rvs=0, rem,r;
	
	scanf("%d",&t);
	
	while(t>0)
	{	
		scanf("%d",&n);
		r=n;
		rem=n;
		rvs=0;
		while(n)
		{
			r=n%10;
			rvs=rvs*10+r;
		
			n=n/10;
			
		}
		
		
		if(rvs==rem)
		{	
		
			printf("wins\n");
			
		}
		else
		{
			
			printf("loses\n");
		}
		
		t--;
	}
	
		
		
}	
