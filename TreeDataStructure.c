#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *left,*right;
}*root,*p,*q;

struct Node *make(int y){
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=y;
	newnode->right=newnode->left=NULL;
	return(newnode);
}

void left(struct Node *r,int x)
{
	if(r->left!=NULL)
	{
		printf("\nInvalid...");
	}
	else
	{
		r->left=make(x);
	}
}

void right(struct Node *r,int x)
{
	if(r->right!=NULL)
	{
		printf("\nInvalid...");
	}
	else
	{
		r->right=make(x);
	}
}

void inorder(struct Node *r)
{
	if(r!=NULL)
	{
		inorder(r->left);
    	printf("\t %d",r->data);
    	inorder(r->right);
	}
}

void preorder(struct Node *r)
{
	if(r!=NULL)
	{
		printf("\t %d",r->data);
    	preorder(r->left);
    	preorder(r->right);
	}
}

void postorder(struct Node *r)
{
	if(r!=NULL)
	{
		postorder(r->left);
    	postorder(r->right);
    	printf("%\t %d",r->data);
	}
}

void create()
{
	int no;
	char choice='y';
	printf("Enter the root : ");
	scanf("%d",&no);
	root=make(no);
	while(choice=='y'||choice=='Y')
	{
		printf("\nEnter number OR Enter -1 to stop : ");
		scanf("%d",&no);
		if(no==-1)
		break;
		p=root;
		q=root;
		while(no!=p->data && q!=NULL)
		{
			p=q;
			if(no<p->data)
			{
				q=p->left;
			}
			else
			{
				q=p->right;
			}
    	}
		if(no<p->data)
		{
			printf("\nLeft branch of %d is %d \n",p->data,no);
			left(p,no);
		}
		else
		{
			right(p,no);
			printf("\nRight branch of %d is %d \n",p->data,no);
		}
		printf("\t\t\t\t\t\t\t\tContinue ? ");
		scanf("%s",&choice);
	}
}

void deletenode()
{
	int no;
	printf("\nEnter number Do you want to delete : ");
	scanf("%d",&no);
	p=root;
	q=root;
	while(no!=p->data && q!=NULL)
	{
		p=q;
		if(no<p->data)
		{
			q=p->left;
		}
		else
		{
			q=p->right;
		}
   	}
   	if(q->left==q->right==NULL)   //Node with no child...
   	{
   		if(q==root)
   		{
   			root=NULL;
   			free(q);
		}
		else if(q==p->left)
		{
			p->left=NULL;
			free(q);
		}
		else
		{
			p->right=NULL;
			free(q);
		}
	}
	
}

int main() {
	int no,action;
	
	while(1)
	{
		printf("\n\n1) Create");
    	printf("\n2) Inorder Traversal");
    	printf("\n3) Preorder Traversal");
    	printf("\n4) Postorder Traversal");
    	printf("\n5) Delete Node");
    	printf("\n6) Exit");
    	scanf("\n%d",&action);
    	switch(action)
    	{
    		case 1:
    			create();
    			break;
    		case 2:
    			printf("\nInorder Transversal is : ");
    			inorder(root);
				break;
			case 3:
				printf("\nPreorder Transversal is : ");
    			preorder(root);
				break;
			case 4:
				printf("\nPostorder Transversal is : ");
    			postorder(root);
				break;
			case 5:
				deletenode();
				break;
			case 6:
				printf("======THANK YOU=======");
				//exit();
				break;
		}
		getch();
	}
}
