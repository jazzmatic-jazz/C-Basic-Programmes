#include<stdio.h>

int main()
{
	int t, n,i ,j,count=0;
	
	scanf("%d",&t);
	
	while(t>0 && t<10)
	{
		scanf("%d",&n);
	
			for (i=1; i<=n*n; i++)
		{	
		
			printf("%d\t",i);
			
			for(j=i; j<=n; j++)
			{
				printf("%d ",j);
			}
				
		
			
		}
		
		
		
		t--;
	}
	
}
