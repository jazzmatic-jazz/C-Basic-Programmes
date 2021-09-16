#include<stdio.h>

int main()
{
	int t, n, a, b, c, d, ans;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&n,&a,&b);
		
		c=0;
		c=2*(180+n);
		d=0;
		d=a+b;
		ans=0;
		ans=c-d;
		
		printf("%d\n",ans);
		
		t--;
	}
}
