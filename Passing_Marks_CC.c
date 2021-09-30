#include<stdio.h>

int main()
{
	int t, a,b,c,a1,b1,c1,total;
	
	scanf("%d",&t);
	
	while (t>0)
	{
		t--;
		
		scanf("%d %d %d %d %d %d %d",&a1,&b1,&c1,&total,&a,&b,&c);
		
		if(a1>a || b1>b || c1>c)
		{
			printf("NO\n");
			
		}
		else if(total>a+b+c)
		{
			printf("NO\n");
		}
		
		else
		{
			printf("YES\n");
		}
		
		
	}

	
	
	
}
