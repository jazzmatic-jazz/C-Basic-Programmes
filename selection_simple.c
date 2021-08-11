#include<stdio.h>

int main()
{
	int i, j, swap,min;
	int arr[]={5,10,4,6,2,1};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<size-1; i++)
	{
		min=i;
		for (j=i+1; j<size; j++)
		{
			if (arr[j]<=arr[min])
			{
				swap=arr[min];
				arr[min]=arr[j];
				arr[j]=swap;
			}	
		}	
	}	
	
	for (i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
}
