#include<stdio.h>

int main()
{
	int t, n, r,rev=0;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		rev=0;
		while(n!=0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		t--;
		printf("%d\n",rev);
	}
	
}
