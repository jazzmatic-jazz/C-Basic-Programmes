#include<stdio.h>

int main()
{
	int t, n,i;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		int x=1;
		for(i=1; i<=n; i++)
		{
			x=x*i;
		}
		printf("%d\n",x);
		
		t--;
	}
}
