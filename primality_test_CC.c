#include<stdio.h>

int main()
{
	int t,n,count=0,i;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		count=0;
		
		for(i=1; i<=n; i++)
		{
			if(n%i==0)
			{
				count++;
				
			}
		}
		if(count==2)
		{
			printf("yes");
			
		}
		else
		{
			printf("no");
			
		}		
		printf("\n");
		t--;
	}
}
