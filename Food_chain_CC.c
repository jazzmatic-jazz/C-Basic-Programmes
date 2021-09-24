#include<stdio.h>

int main()
{
	int e,k, t,x,count;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&e, &k);
		count=0;
		
		while(e!=0)
		{
			e=e/k;
			count++;
			
		}
		printf("%d\n",count);
		
		t--;
	}
}
