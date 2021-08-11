#include<stdio.h>

int pa(int arr[],int size);

int main()
{
	int i, temp, min, j;
	int arr[]={58,45,18,35,22};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	pa(arr,size);
	
	for (i=0; i<size; i++)
	{
		min=i;
		for (j=i+1; j<size; j++)
		{
			if (arr[j]<arr[min])
			{
				temp=arr[j];
				arr[j]=arr[min];
				arr[i]=temp;
			}
		}
	}
	printf("\n");
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

