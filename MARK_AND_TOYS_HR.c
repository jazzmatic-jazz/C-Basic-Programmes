#include <stdio.h>

int main()
{
	int n, k,i,j,c=0,sum=0;
	
	printf("Size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Amount:");
	scanf("%d",&k);
	
	int copy[i];
	
	for (i=0; i<n; i++)
	{
		scanf ("%d",&arr[i]);
		
	}
	
	for (i=0; i<n; i++)
	{
		if (sum+arr[i]<=k)
		{
			copy[i]=arr[i];
			printf("%d  ",copy[i]);
			c++;
		}
		
	}
	printf("%d",c);
	
}
