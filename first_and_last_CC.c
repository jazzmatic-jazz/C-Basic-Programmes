#include <stdio.h>

int main()
{
	int n, t, s,r;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		
		r=n%10;
		
		while(n>=10)
		{
			n=n/10;
			
		}
		
			printf("%d\n",r+n);
		t--;
	}

	
	return 0;
	
	
}
