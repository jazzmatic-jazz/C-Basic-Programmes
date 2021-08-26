#include<stdio.h>

int main()
{
	int t, n,arr[1000000],i,temp,j,sum;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		int a[n];
		
		
		for(i=0; i<n; i++)
		{
			
			scanf("%d",&a[i]);
			
		}
		for(i=0; i<n; i++)
		{
			for(j=0; j<n-i; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0; i<n; i++)
		{
			arr[i]=a[i];
		}
		
		
		sum=arr[0]+arr[1];
		printf("%d\n",sum);
		
		t--;
	}
	
}
