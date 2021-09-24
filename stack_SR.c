o#include<stdio.h>
int push(int arr[],int ptr,int size);
int pop(int ptr);

int main()
{
	int ptr=-1, size;
	scanf("%d",&size);
	int arr[size];
	
	ptr=push(arr,ptr, size-1);
	printf("%d\n",arr[ptr]);
	
	ptr=pop(ptr);
	printf("%d\n",arr[ptr+1]);
	
	ptr=push(arr,ptr, size-1);
	printf("%d\n",arr[ptr]);
	
	ptr=pop(ptr);
	printf("%d\n",arr[ptr+1]);
		ptr=pop(ptr);
	printf("%d\n",arr[ptr+1]);
}
int push(int arr[],int ptr,int size)
{
	if (ptr<size)
	{
		scanf("%d",&arr[++ptr]);
		return ptr;
	}
	else
	{
		printf("Full");
		return ptr;
		
	}
}

int pop(int ptr)
{
	if (ptr==-1)
	{
		printf("Empty");
		return ptr;
	}
	else
	{
		return --ptr;
	}
}

