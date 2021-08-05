//From 007rodgermassey@gmail.com to Everyone:  01:52 PM
// queue

#include <stdio.h>

int insert(int arr[], int q, int size);

int r(int arr[], int p, int q);


int main()
{
	int arr[4];
	
	int size= sizeof(arr)/sizeof(arr[0]);
	

	int p=-1,q=-1, i;
	//p = r(arr,p,q); 
	q = insert(arr,q,size-1);
	q = insert(arr,q,size-1);
	q = insert(arr,q,size-1);
	q = insert(arr,q,size-1);
	
	p = r(arr,p,q); 
	p = r(arr,p,q); 
//	p = r(arr,p,q); 
//	p = r(arr,p,q); 
	
	for(i=0; i<p; i++)
	printf("%d\n",arr[p+i]);
}

int insert(int arr[], int q, int size)
{
	if(q<size)
	{
		scanf("%d",&arr[++q]);
		return q;
	}
	else
	return q;
}

int r(int arr[], int p, int q)
{
	if(p!=q)
	{
		return ++p;
	}
	
	else 
	{	
		printf("array is empty!");
		return p;
	}
}

