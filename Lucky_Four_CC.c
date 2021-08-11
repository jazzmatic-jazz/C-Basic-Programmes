#include<stdio.h>

int main()
{
	int t, n, count=0,i;
	scanf("%d",&t);
	
	while(t>0)
	{	
		scanf("%d",&n);
		
		while(n!=0)
		
		{
			i=n%10;
			if (i==4)
			{
				count++;
			}
			n=n/10;
		}		
			
		printf("%d\n",count);
			
		t--;
		count=0;
	}
	
}
