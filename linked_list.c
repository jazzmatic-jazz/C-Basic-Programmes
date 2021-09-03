#include<stdlib.h>
#include<stdio.h>

struct node{
			int data;
			struct node *link;  //self referential structure
		   }; 

int count (struct node *head);
int print(struct node *head);

int main()
{
	struct node *head= NULL;  //pointer to the first node
	head=(struct node*)malloc(sizeof(struct node)); //typecasting is not mandatory  
	head -> data=45;
	head ->link=NULL;
	
	struct node *current= malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	
	current= malloc(sizeof(struct node));
	current->data=3;
	current->link=NULL;
	
	head->link->link->link=current;
	
	count(head);
	print(head);
	return 0;

}
int count (struct node *head)
{
	int count=0;
	if (head==NULL)
	{
		printf("Empty");
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	printf("%d",count);  //count of number of nodes
}

int print(struct node *head)
{
		if (head==NULL)
	{
		printf("Empty");
	}
	struct node *ptr=NULL;
	ptr=head;
	
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
}
