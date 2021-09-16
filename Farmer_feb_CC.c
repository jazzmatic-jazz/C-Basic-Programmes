#include<stdio.h>

int main()
{
	int x, y, t,sum;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&x,&y);
		int z=1;
		int count=0;
		sum=x+y+z;
		
		printf("%d %d",sum,z);
		
		while(z!=9)
		{
			if (sum%z==0)
			{
				count++;
				
			}
			z++;
		}
		
		if(count==2)
		{
			printf("%d",z);
		}
		
		
		t--;
	}
}
