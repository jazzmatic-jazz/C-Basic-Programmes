#include<stdio.h>

int main()
{
	int t, x, y, z;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&x,&y,&z);
		
		if (x+y==z || x+z==y || y+z==x)
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
