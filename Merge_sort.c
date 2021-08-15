#include <stdio.h>

int pa( int A[], int size);
int mergesort(int A[], int l, int r);
int merge(int A[], int l, int m, int r);

int main()
{
	int arr[]={12, 11, 13, 5 ,6 ,7};
	int s= sizeof (arr)/sizeof(arr[0]);
	printf("%d\n\n",s);
	
	pa(arr, s);
	
	mergesort(arr,0,s-1);
	pa(arr,s);
/*	for (i=0; i<s; i++ )
	{
		printf("%d",arr[i]);
	}*/
	return 0;
	
}

int pa( int A[], int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		printf("%d \t",A[i]);
	}
}

int mergesort(int A[], int l, int r)
{
	int i, m;
	
	if (l<r)
	{
		m=(l+r)/2;
		
		mergesort(A, l, m);
		mergesort(A, m+1,r);
		merge(A, l, m, r);
		
	}
}

int merge(int A[], int l, int m, int r)
{
	int b[20];
	int i=l, j=m+1, k=l;
	
	while(i<=m && j<=r)
	{
		if (A[i]<=A[j])
		{
			b[k]=A[i];
			k++;
			i++;
		}
		
		else
		{
			b[k]=A[j];
			k++;
			j++;
		
		}
	}
	
	while (i<=m)
	{
		b[k]=A[i];
		k++;
		i++;
			
	}

	
	while(j<=r)
	{
		b[k]=A[j];
		k++;
		j++;
		
	}
	
	for (k=l; k<=r; k++)
	{
		A[k]=b[k];
	
	}
		
	
}
