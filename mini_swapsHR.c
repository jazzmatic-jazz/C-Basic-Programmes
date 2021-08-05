#include <stdio.h>

int main()
{
	int i, j, n,c=0,swap;
	scanf("%d",&n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
// Bubble sort
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-i-1; j++)
		{	
			if (arr[j]>arr[j+1])
			{
				
				swap=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=swap;
				
				c++;		
												
			}
			
		}
		
			
	}	

		for (i=0; i<n; i++)
	{
		printf("\n",arr[i]);
	}
		printf("\n p %d",c);
	
	
}
