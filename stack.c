#include<stdio.h>

int push( int arr[],int ptr,int size);
int pop(int ptr);

int main()
{
	int n,ptr=-1;
	
	printf ("Enter the size the array:");
	scanf("%d",&n);
	
	int arr[n];
	
	ptr=push(arr, ptr, n-1);
	printf("Push: %d, index is:%d\n",arr[ptr],ptr);
	
	ptr=push(arr, ptr, n-1);
	printf("Push: %d, index is:%d\n",arr[ptr],ptr);

	ptr=push(arr, ptr, n-1);
	printf("Push: %d, index is:%d\n",arr[ptr],ptr);
	
	ptr=push(arr, ptr, n-1);
	printf("Push: %d, index is:%d\n",arr[ptr],ptr);
	
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	

	
}
int  push( int arr[],int ptr,int size)
{
	if (ptr<size)
	{
		printf ("Enter the value in the stack:");
		scanf("%d",&arr[++ptr]);
		return ptr;
		
	}
	else
	{
		printf("full!!!!\n");
		
		return ptr;
	}		
	

}

int pop(int ptr)
{
	if (ptr==-1)
	{
		printf ("Stack is empty\n");
		return ptr;
	}
 	return --ptr;
	
}
