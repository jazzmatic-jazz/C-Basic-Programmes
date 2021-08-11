#include <stdio.h>

int pa(int arr[],int size);

int main()
{
	int i, j, temp;
	int arr[]={51,42,10,300,26};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for (i=0; i< size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				
			}
			
		}
	}
	pa(arr,size);
	
}
int pa(int arr[],int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}
