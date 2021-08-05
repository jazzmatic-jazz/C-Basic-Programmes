#include<stdio.h>

int array(int arr[], int size);
int pa(int arr[], int size);
int selectionsort(int arr[], int size);
int swap(int *a, int *b);

int main()
{
	int size;
	
	printf("Size of the array:\n");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the values in the array:\n");
	array(arr,size);
	
	printf("Unsorted array:\n");
	pa(arr,size);
	
	selectionsort(arr,size);
	
	printf("\nSorted array:\n");
	pa(arr,size);
	
}

int array(int arr[],int size)
{
	int i;
	
	for (i=0; i<size; i++)
	{
		
		scanf("%d",&arr[i]);
		
	}
}

int pa(int arr[], int size)
{
	int i;
	
	for (i=0; i<size; i++)
	{
		
		printf("%d  ",arr[i]);
		
	}
	
}

int selectionsort(int arr[], int size)
{
	int i, min, j;
	
	for (i=0; i<size-1; i++)
	{
		min=i;
		
		for (j=i+1; j<size; j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
			
		}
		swap(&arr[min],&arr[i]);
	}
}

int swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	
}

