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

void inorder(struct node *root)
{
	if (root!=NULL)
	{
		inorder( root->left);
		printf("%d ->",root->data);
		inorder(root->right);
		
	}
}

int main()
{
	struct node *root=NULL;
	
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,2);
	root=insert(root,11);
	root=insert(root,15);
	root=insert(root,6);
	root=insert(root,7);
	
	printf("Inorder traversal: ");
	inorder(root);
}


