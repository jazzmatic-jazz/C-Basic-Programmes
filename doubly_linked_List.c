#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct node {
					struct node *left;
					struct node *right;			//self-referrancing structure
					int data;		
					
				};
	
	//firstly we need head to point towards the first link
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=100;
	head->left=NULL;
	head->right=NULL;
	
	//connecting second node with first one with 
	//seconds left will connect to the right of first node
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->left=head;
	head->right=current;
	current->data=200;
	current->right=NULL;
	
	
	//connecting third node with entire train
	
	current=(struct node*)malloc(sizeof(struct node));
	current->left=head->right;
	head->right->right=current;
	current->data=300;
	current->right=NULL;
	
	printf("\4First node\4\n");
	printf("Left: %d\t",head->left);
	printf("\t\tdata: %d\t",head->data);
	printf("\tRight: %d\n",head->right);
	
	printf("\n\3Second node\3\n");
	printf("Left: %d\t",head->right);
	printf("\tdata: %d\t",head->right->data);
	printf("\tRight: %d\n",head->right->right);
	
	
	printf("\n\1Third node\2\n");
	printf("Left: %d\t",head->right->right);
	printf("\tdata: %d\t",head->right->right->data);
	printf("\tRight: %d\n",head->right->right->right);
	
	
	
}
