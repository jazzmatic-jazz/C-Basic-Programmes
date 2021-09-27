#include<stdio.h>

int main()
{
	int t, arr[7], c1,c2,i;
	scanf("%d",&t);
	
	while(t>0)
	{
		t--;
		c1=c2=0;
		
		for(i=0; i<7; i++)
		{
			scanf("%d",&arr[i]);
		}
		
		for(i=0; i<7; i++)
		{
			if (arr[i]==1)
			{
				c1++;
			}
			else if(arr[i]==0)
			{
				c2++;
				
			}
		}
		if (c1<c2)
		{
			printf("NO\n");
		}
		else if(c2<c1)
		{
			printf("YES\n");
		}
		
	}
	
}
