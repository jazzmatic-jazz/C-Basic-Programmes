#include<stdio.h>

int pa(int arr[],int size);
int selectsort(int arr[], int size);
int swap(int *a, int *b);

int main()	
{
	int size;
	int arr[]={90,23,101,45,65,28,67,89,34,29};//10,7,8,9,1,5 //90,23,101,45,65,28,67,89,34,29

	size=sizeof(arr)/sizeof(arr[0]);
	printf("Size:%d\n",size);
	
	printf("\nUnsorted Array:\n");
	pa(arr,size);
	selectsort(arr,size);
	printf("\nSorted Array:\n");
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

int selectsort(int arr[], int size)
{
	int i,c, j, min;
	
	for(i=0; i<size-1; i++)
	{
		min = i;
		
		for (j=i+1; j<size; j++)
		{
		
			if(arr[j]<arr[min])
			
			 min=j;
			
		}
		
		swap(&arr[min], &arr[i]);
				
	} 
}

int swap(int *a, int*b)
{	
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
