#include<stdio.h>

int main()
{
	int t, a, b, c, sum=0;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&a,&b,&c);
		
		sum=a+b+c;
		if (sum==180)
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
