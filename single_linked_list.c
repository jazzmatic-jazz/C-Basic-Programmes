#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct node{
				int data;
				struct node *link; //self referencing structure
				};
				
	
	//initially we need head to store the address of the first node
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	printf("address of head: %d\n",head);
	head->data= 5;
	head->link=NULL;
	
	//printf("Data: %d\t link:%d\n",head->data, head->link);
	
	//connecting second node with the first node
	
	struct node *second=(struct node*)malloc(sizeof(struct node));
	head->link=second;
	second->data=6;
	second->link=NULL;
	//head->link->link;
	
/*	printf("Data: %d\t link:%d\n",head->data, head->link);
	printf("Data: %d\t link:%d\n",second->data, second->link);		*/
	
	//connecting 3rd node with the second and linking and making connection with the head, to keep every node entact.
	
	second=(struct node*)malloc(sizeof(struct node));
	head->link->link=second;
	second->data=7;
	second->link=NULL;
	
	printf("Data: %d\t link:%d\n",head->data, head->link);
	printf("Data: %d\t link:%d\n",head->link->data,head->link->link);
	printf("Data: %d\t link:%d\n",head->link->link->data, head->link->link->link);
	
	//removing first node 
	printf("\n\3 Removal of first node \3\n");
	head=head->link;
	printf("Data: %d\t link:%d\n",head->data, head->link);
	printf("Data: %d\t link:%d\n",head->link->data,head->link->link);
	//printf("Data: %d\t link:%d\n",head->link->link->data, head->link->link->link);
	
	printf("\n\2 Adding node in the middle of latest first and last \2\n");
	
	second=(struct node*)malloc(sizeof(struct node));
	second->link=head->link;
	head->link=second;
	second->data=8;
	
	head->link->link->link;
	
	printf("Data: %d\t link:%d\n",head->data, head->link);
	printf("Data: %d\t link:%d\n",head->link->data,head->link->link);
	printf("Data: %d\t link:%d\n",head->link->link->data, head->link->link->link);
	
	int count=0;
	struct node *ptr;
	ptr=head;
	
	while(ptr!=NULL)
	{
		count++;
		
		printf("\nCount of nodes: %d, Data:%d\n",count,ptr->data);
		ptr=ptr->link;
		
		
	}	
	
					
}
