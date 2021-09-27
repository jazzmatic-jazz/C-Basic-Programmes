#include<stdio.h>
#include<stdlib.h>

struct node {
				
				int data;
				struct node *left;
				struct node *right;
			};

struct node *create(int val)
{
	struct node *current=(struct node*) malloc(sizeof (struct node))	;
	current->data=val;
	current->left=NULL;
	current->right=NULL;
	
	return current;
	
}

struct node *insert(struct node *root, int val)
{
	if (root==NULL)
	{
		return create(val);
	}
	
	if (root->data<val)
	{
		root->right=insert(root->right,val);
		return root;
	}
	else if(root->data>val)
	{
		root->left=insert(root->left,val);
		return root;
	}
	
}

int main()
{
	struct node *root=NULL;
	
	root=insert(root,100);
	printf("%d",root->data);
	printf("\t%d",root->left);
	printf("\t%d",root->right);	
	root=insert(root,50);
	printf("\n%d",root->left->data);
	printf("\t%d",root->left);
	printf("\t%d",root->right);	
}


