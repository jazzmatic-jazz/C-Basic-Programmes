#include<stdio.h>

int pa(int arr[],int size);
int mergesort(int arr[], int low , int high);
int merge(int arr[],int low,int  m, int high);

int main()
{
	int arr[]={15,71,30,110,11,9};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted array:\n");
	pa(arr,size);
	
	mergesort(arr, 0, size-1);
	
	printf("\nSorted array:\n");
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

int mergesort(int arr[], int low , int high)
{
	int m;
	if (low <high)
	{
		m=(low+high)/2;
		
		mergesort(arr, low, m);
		mergesort(arr, m+1, high);
		merge(arr,low, m, high);
	}
}

int merge(int arr[],int low,int  m, int high)
{
	int i=low, k=low, j=m+1;
	int b[10];
	
	while (i<=m && j<=high)
	{
		if (arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
		
	}
		while(i<=m)
    	{
			b[k]=arr[i];
			i++;
			k++;
		}
		while(j<=high)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	
	for (k=low; k<=high; k++)
	{
		arr[k]=b[k];
	}
	

}
