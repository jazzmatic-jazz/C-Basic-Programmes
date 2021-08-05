#include <stdio.h>

int main()
{
	int i, j,z=20,n,swap;
	
	scanf("%d",&n);
	int arr[n];
	
for (i=0; i<n; i++)	
{
	arr[i]=z-i;
}

printf ("\n");

for (i=0; i<n; i++)	
{
	printf("%d ",arr[i]);
}

// bubble sort


for (i=0; i<n; i++)	
{
	for (j=0; j<n-i-1
	; j++)
	{
		if (arr[j]>arr[j+1])
		{
			swap=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=swap;
		}
	}
}

printf("\n");

for (i=0; i<n; i++)	
{
	printf("%d ",arr[i]);
}

}
