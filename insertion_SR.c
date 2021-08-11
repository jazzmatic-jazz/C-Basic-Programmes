#include<stdio.h>

int swap(int *a,int *b);

int main()
{
	int i, j, temp;
	int arr[]={12,50,32,11,45};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && temp<arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
			
		}
		arr[j+1]=temp;

	}
	for (i=0; i<size; i++)
	{
		printf("%d  ",arr[i]);
	}
}

