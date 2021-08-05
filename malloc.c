#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	
	printf ("Enter the number of integers:");
	scanf ("%d",&n);	//& because we need the address.
	
	//*ptr is the pointer where we want to store the value
	// int* is typecasting 
	int *ptr=(int*)malloc(n*sizeof(int)) ;
	
	if (ptr==NULL)
	{
		printf ("Memory not available");
		exit(1);
	}
	for (i=0; i<n; i++)
	{
		printf ("Enter an integer:");
		scanf("%d",ptr+i);	// no use of & as ptr is storing the address only.
		
	}
	for(i=0; i<n; i++)
	{
		printf ("%d ",*(ptr+i));	// for the value at ptr address
	}
	
}
