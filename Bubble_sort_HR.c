#include <stdio.h>

int main()
{
	int i,j,swap,count=0,n;
	
	scanf("%d",&n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		
	}
/*	for (i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}*/
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				swap=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=swap;
				count++;
			}
		}
	}
	printf("Array is sorted in %d swaps.\n",count);
	
/*	for(i=0; i<n; i++)
	{
		printf("%d\n",arr[i]);
	}*/
	
	printf("First Element: %d\n",arr[0]);
	printf("Last Element: %d",arr[n-1]);

}
