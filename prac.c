#include <stdio.h>

int main()
{
	int i, n, t,r,sum=0;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		
		while(n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		
		t--;
		
		printf("%d\n",sum);
		sum=0;
	}
	
}
