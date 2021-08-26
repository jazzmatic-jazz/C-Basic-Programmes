#include<stdio.h>

int main()
{
	int t, n, count=0,i;
	scanf("%d",&t);
	int arr[1001];
	while(t>0)
	{	count=0;
		for(i=0; i<101; i++)
		{
			scanf("%d",&arr[i]);
			
			if(arr[i]==4)
			{
				count++;
			}
			printf("%d\n",count);
		}
		
		
	}
	
}
