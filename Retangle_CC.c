#include<stdio.h>

int main()
{
	int t, a, b, c, d;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if((a==b && c==d )|| (a==c && b==d) ||(b==c && a==d))
		{
			printf("YES\n");
		}
		
		else
		{
			printf("NO\n");
		}
		t--;
	}
	
}
