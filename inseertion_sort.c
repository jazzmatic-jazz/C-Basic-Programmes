
#include<stdio.h>

int main()
{
	int arr[5]={2,5,3,1,4};
	int size, i, j, temp;
	size=sizeof(arr)/sizeof(arr[0]);
	
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
		printf("%d",arr[i]);
	}
}
