#include <stdio.h>
#include <stdlib.h>

int main()
{	int count=0;
	struct node {int data; 
				 struct node *link;};
				 
	struct node *head;
	
	head = (struct node *)malloc(sizeof(struct node));
	
	(*head).data = 10;
	head -> link = NULL;
	
	//printf("%d\n",head->data);
	//printf("%d",head->link);
	
	struct node *current;
	
	current = (struct node *)malloc(sizeof(struct node));
	
	current -> data =20;
	head -> link = current;
	current -> link  = NULL;
	
	
	current = (struct node *)malloc(sizeof(struct node));
	
	current -> data =30;
	head -> link -> link = current;
	current -> link  = NULL;
	
	
	printf("%d.  %d\n",++count,head->data);
	printf("     %d\n",head->link);
	
	printf("%d.  %d\n",++count,(*(*head).link).data);
	printf("     %d\n",head->link->link);
	
	printf("%d.  %d\n",++count,head->link->link->data);
	printf("     %d\n",head->link->link->link);	
	
	
	printf("**AFTER DELETION**\n");
	
	head -> link = head ->link -> link;
	
	printf("%d.  %d\n",++count,head->data);
	printf("     %d\n",head->link);
printf("%d.  %d\n",++count,(*(*head).link).data);
	printf("     %d\n",head->link->link);
	
	
	printf("**AFTER UPDATION**\n");
	
	current = (struct node *)malloc(sizeof(struct node));
	current -> data = 45;
	
	current -> link = head -> link;
	
	head -> link = current;
	
	printf("%d.  %d\n",++count,head->data);
	printf("     %d\n",head->link);
	
	printf("%d.  %d\n",++count,(*(*head).link).data);
	printf("     %d\n",head->link->link);
	
	printf("%d.  %d\n",++count,head->link->link->data);
	printf("     %d\n",head->link->link->link);	
	
	
	printf("to print number of nodes and their data press 'y'");
	
	count = 0;
	struct node *ptr;
	
	char a;
	scanf("%c",&a);
	
	if(a=='y')
	{	
		ptr=head;
		
		while(ptr!=NULL)
		{
			count++;
			printf("this is node %d and the data is :- %d\n",count,ptr->data);
			
			ptr = ptr->link;
		}
	}
	
}

