#include<stdio.h>

int p=-1,q=-1;

int enqueue(int arr[], int q, int size);
int dequeue(int arr[],int p,int q);
int pa(int arr[], int p, int q);

int main()
{
	int z,size,i;

	char ch;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf ("Array is :arr[%d]\n",size);
	
	printf("Press e to EXIT or anything to continue\n");
	scanf(" %c",&ch);
	
	if (ch=='e')
	{
		printf("Exit");
		return 0;
	}
	printf("\n\2\tPRESS...!!\t\2\n");

	
	while(1)
{
	printf("1-ENQUEUE\n2-DEQUEUE\n3-EXIT\n");
	scanf("%d",&z);
	
	switch(z)
	{
		case 1: q=enqueue(arr,q,size-1);
				printf("\nvalue at index: %d, value:%d\n",q,arr[q]);
				break;
		
		case 2: p=dequeue(arr,p,q);
				printf("\nvalue at index :%d,value :%d\n",p,arr[p]);
			
				break;
	
		case 3: exit(0)	;
				break;
				
		case 4: pa(arr, p,q);
				break;
	}
}
// for printing

}

int enqueue(int arr[], int q, int size)
{
	if (q==size)
	{
		printf("\nQUEUE IS FULL!!!\n");
		return q;
	}
	else
	{
		if (p==-1)
		{
			p=0;
			
		}
		
		scanf("%d",&arr[++q]);
	}
		return q;
}

int dequeue(int arr[],int p,int q)
{
	if (p==-1 || p>q)
	{
		printf("\nQUEUE IS EMPTY\n");
		return p;
	}
	else
	{
		return ++p;
	}
}
pa(int arr[], int p, int q)
{
	int i;
		for (i=p; i<=q; i++)
	{
		printf("\n%d\n",arr[i]);
	}
		
}
