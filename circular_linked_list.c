#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct node{ int data; struct node *link;};
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	
	printf("Address of head: %d\n",head);
	
	head->data=25;
	head->link=NULL;
	printf("Data of first node: %d\t",head->data);
	printf("\tLink part of first node: %u\n\n",head->link);
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	head->link=current;
	current->data=29;
	current->link=NULL;
	
	printf("Data of first node: %d\t",head->data);
	printf("\tLink part of first node: %u",head->link);
	printf("\nData of second node: %d\t",head->link->data);
	printf("\tLink part of second node: %u\n\n",head->link->link);
	
	current=(struct node*)malloc(sizeof(struct node));
	head->link->link=current;
	current->data=12;
	current->link=head;

	printf("Data of first node: %d\t",head->data);
	printf("\tLink part of first node: %u",head->link);
	printf("\nData of second node: %d\t",head->link->data);
	printf("\tLink part of second node: %u",head->link->link);
	printf("\nData of third node: %d\t",head->link->link->data);
	printf("\tLink part of third node: %u\n\n",head->link->link->link);
	
	struct node*ptr=head;
	int i,count=0;
	
	for (i =0; i<9; i++)
	{	
		count++;
		printf("%d\4\t",count);
		printf ("Data: %d\t",ptr->data);
		printf("Link: %u\n",ptr->link);
		ptr=ptr->link;
	}		


	
		
	
	
	
}
