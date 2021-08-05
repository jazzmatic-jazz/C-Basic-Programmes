//https://www.sanfoundry.com/c-program-quick-sort-recursion/
#include<stdio.h>

int pa(int arr[],int size);
int quicksort (int arr[],int  low,int high);
int part(int arr[], int low, int high);
int swap(int *a, int *b);


int main()
{
	int arr[]={10,7,8,9,1,5};
	int size= sizeof (arr)/sizeof(arr[0]);
	printf ("Size of the array is: %d\n",size);
	
	pa(arr,size);
	quicksort (arr,0,size-1);
	printf("\n");
	pa(arr,size);
	
}

int pa(int arr[],int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		printf("%2d ",arr[i]);
	}
}

int quicksort (int arr[] ,int low,int high)
{
	if (low<high)
	{
		int pi,x,y;
		pi= part(arr, low, high);
		
		quicksort(arr, low, pi-1 );
		
		quicksort(arr, pi+1, high);
			
	}
}

int part(int arr[], int low, int high)
{
	int v,j,s,s1;
	v=arr[high];

	int l=(low-1);
	
	
	for (j=low; j<=high-1; j++)
	{
	
		if (arr[j]<v)
		{ 
			l++;
			
			swap(&arr[l],&arr[j]);
			
		}
	}

	swap(&arr[l+1],&arr[high]);

	return (l+1);
}

int swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
