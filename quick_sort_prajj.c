#include <stdio.h>

int count=0;
int main()
{
	int arr[]={10,80,30,90,40,50,70}; //10,25,3,50,20 //10,7,8,9,1,5
									  //10,80,30,90,40,50,70
	int r = sizeof(arr)/sizeof(arr[0])-1;
	int i;
	
	quicksort(arr,0, r);
	
	printf("\n\noverall sorted array:");
	for(i=0; i<=r; i++)
	{
		printf("\t%d", arr[i]);
	}
}


void quicksort(int arr[], int l, int r)
{	int pi;
	int i;
	if(l<r)
	{
		pi = partition(arr, l, r);				//pi will store the partitioning index 
		
		printf("current sorted array:");
		for(i=l; i<=r; i++)
		printf("\t%d",arr[i]);
		printf("\n\n");
		
		quicksort(arr, l, pi-1);
		
		quicksort(arr, pi+1, r);
		//printf("\n%d",count++);
	}
}
partition( int arr[], int l, int r)
{	int i;
	int pivot;
	int p,q;
	int swap;
	
	pivot = arr[r];
	p=l;
	q=r-1;
	
	while(p<=q)
	{	
	
		while(arr[p] <= pivot && p<r)
		{
			p++;	
		}
	
		while(arr[q] > pivot && q>l)
		{
			q--;
		}
	
		if(p<q)
		{
			swap=arr[p];
		
			arr[p] = arr [q];
		
			arr[q] = swap;	
		}
	
		if(p>=q)
		{	printf("pivot element : %d\n",arr[r]);
			swap= arr[r];
		
			arr[r]= arr[p];
		
			arr[p] = swap;
		
			return p;
		}
	}
}

