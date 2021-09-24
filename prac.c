#include<stdio.h>

int push (int arr[], int ptr, int size);

int pop(int ptr);

int main()
{
	int ptr=-1, n;
	scanf("%d",&n);
	
	int arr[n];
	
	ptr=push(arr, ptr, n-1);
	printf("push:%d\tptr:%d\n",arr[ptr],ptr);
	
	ptr=push(arr, ptr, n-1);
	printf("push:%d\tptr:%d\n",arr[ptr],ptr);
	
	ptr=pop(ptr);
	printf("Pop: %d, index is:%d\n",arr[ptr+1],ptr+1);
	
	ptr=push(arr, ptr, n-1);
	printf("push:%d\tptr:%d\n",arr[ptr],ptr);
	
	
}

int push (int arr[], int ptr, int size)
{
	if(ptr<size)
	{
		scanf("%d",&arr[++ptr]);
		return ptr;
	}
	else
	{
		printf("full\n");
		return ptr;
	}
	
}

int pop(int ptr)
{
	if (ptr==-1)
	{
		printf("empty");
		return ptr;
	}
	else
	{
		return --ptr;
	}
}
