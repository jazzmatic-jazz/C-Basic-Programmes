#include <stdio.h>

int array(int arr[], int size);
int mergesort(int arr[], int l, int r );
int merge(int arr[],int l,int m,int r);

int main()
{
	int i,n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n],l;
	
	array( arr,n);
	
	mergesort(arr, l,n-1);
	


}

int array(int arr[], int n)
{
	int i;
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		
	}
		for (i=0; i<n; i++)
	{
	printf("%d\t",arr[i]);
		
	}
}

int mergesort(int arr[], int l, int r )
{
	int m;
	
	if (l<r)
	{
		m=(l+r)/2;
		
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
		for (i=0; i<n; i++)
	{
	printf("%d\t",arr[i]);
		
	}
	
	
	}
}

int merge(int arr[],int l,int m,int r)
{
	int y,z,i,j,k=l;
	y=m-l+1;
	z=r-m;
	
	// temp array
	int a[y],b[z];
	
	for(i=0; i<y; i++)
	{
		a[i]=arr[l+i];
	}
	for(j=0; j<z; j++)
	{
		b[j]=arr[m+1+j];
	}
	
	while(i<y && j<z)
	{
		if (a[i]<=b[j])
		{
			arr[k]=a[i];
			i++;
			k++;
		}
		
		else
		{
			arr[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<y)
	{
		arr[k]=a[i];
		i++; 
		k++;
		
	}
	while(j<z)
	{
		arr[k]=b[j];
		j++;
		k++;
	}
}

