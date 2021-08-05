#include<stdio.h>

int push(int arr[],int ptr, int size);
int pop(int ptr);

int main()
{
	int i,n,ptr=-1;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	char ch;
	
	printf("Press e to EXIT or anything to continue\n");
	scanf(" %c",&ch);
	
	if (ch=='e')
	{
		printf("Exit");
		return 0;
	}
	
	while(1)//ch!='e'
	{
		
		printf("\nPress 1 for PUSH\nPress 2 for POP\nPress 3 to exit\n");
		scanf("%d",&i);
		
		switch(i)
		{
			case 1: ptr=push(arr,ptr, n-1);
					printf("Push:%d,  index is:%d",arr[ptr],ptr);
					break;
			
			case 2: ptr =pop(ptr);
					printf("Pop:%d, index is:%d",arr[ptr+1],ptr+1);
					break;
			case 3: exit(0);	
					
		}
	//	printf("\nPress 'e' to exit\n");
	//	scanf (" %c",&ch);
	}
	
}
int push(int arr[],int ptr, int size)
{
	if (ptr<size)
	{
		scanf("%d",&arr[++ptr]);
		return ptr;
	}
	else
	{
		printf("\nStack is FULL\n");
		return ptr;
	}
}

int pop(int ptr)
{
	if (ptr==-1)
	{
		printf("\nStack is empty\n");
		return ptr;
	}
	else
	{
		return --ptr;
	}
}
