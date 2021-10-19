#include<stdio.h>

int main()
{
	int a,b,c,t;
	scanf("%d",&t);
	
	while(t>0)
	{
		t--;
		scanf("%d %d %d",&a,&b,&c);
		
		if (a==7 || b==7|| c==7)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
}
