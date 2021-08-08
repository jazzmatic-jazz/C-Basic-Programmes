#include <stdio.h>

int main()
{
	int size,i, j, temp;
	
	scanf("%d",&size);
	int arr[size];
	
	for (i=0; i<size; i++)
	{
		scanf ("%d",&arr[i]);
		
	}
	
		for (i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
	
		
		while(j>=0 && temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		
			arr[j+1]=temp;
	}
	
	for (i=0; i<size; i++)
	{
		printf ("%d\n",arr[i]);
		
	}	
	
	return 0;
	
}
