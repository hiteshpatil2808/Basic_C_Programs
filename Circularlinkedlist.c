#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*last;

void create(int);
void display();
void insertfirst(int);
void insert(int,int);
void deletefirst();
void delete1(int);

int main() 
{
	int ch,n,loc;
	do
	{
	    printf("1-Create\n2-Display\n3-Insert First Node\n4-Insert\n5-Delete First Node\n6-Delete");
    	printf("\nEnter your choice : ");
    	scanf("%d",&ch);
    	if(ch==1)
    	{
	    	printf("\nEnter a data to insert in linked list : ");
	    	scanf("%d",&n);
	    	create(n);
    		display();
	    }
	    else if(ch==2)
    	{
    		display();
    	}
    	else if(ch==3)
    	{
    		printf("\nEnter a data enter in first node : ");
    		scanf("%d",&n);
    		insertfirst(n);
    		printf("\nInserted Successfully...");
		}
		else if(ch==4)
		{
			printf("\nEnter a data to insert in linked list and its location : ");
			scanf("%d%d",&n,&loc);
			if(loc==1)
			{
				insertfirst(n);
			}
			else
			{
				insert(n,loc);
			}
			printf("\nInserted Successfully...");
		}
		else if(ch==5)
		{
			deletefirst();
			printf("Deleted successfully...");
		}
		else if(ch==6)
		{
			printf("\nEnter a location of node to delete it : ");
			scanf("%d",&loc);
			delete1(loc);
			printf("Deleted successfully...");
		}
		else
		{
			printf("\nEnter Valid Choice...");
		}
    	printf("\nDo you want to continue press 1...");
    	scanf("%d",&ch);
	}while(ch==1);
	printf("\n--------THANK YOU----------");
	return 0;
}

void create(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(last==NULL)
	{
		last=newnode;
		last->addr=last;
	}
	else
	{
		newnode->addr=last->addr;
		last->addr=newnode;
		last=newnode;
	}
}

void display()
{
	struct Node *curr;
	if(last==NULL)
	{
		printf("\nLinked list is empty...");
	}
	else
	{
		curr=last->addr;
    	while(curr!=last)
    	{
	     	printf("| %d || %u |->",curr->data,curr->addr);
	    	curr=curr->addr;
	    }
    	printf("| %d || %u |->",curr->data,curr->addr);
	}
	
}

void insertfirst(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=last->addr;
	last->addr=newnode;
}

void insert(int n,int loc)
{
	struct Node *newnode,*temp;
	int count=1;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	temp=last->addr;
	while(count<loc-1)
	{
		temp=temp->addr;
		count++;
	}
	newnode->addr=temp->addr;
	temp->addr=newnode;
}

void deletefirst()
{
	struct Node *temp;
	temp=last->addr;
	last->addr=temp->addr;
	temp->addr=NULL;
	free(temp);
}

void delete1(int loc)
{
	struct Node *temp,*curr;
	int count=1;
	curr=last->addr;
	while(count<loc-1)
	{
		curr=curr->addr;
		count++;
	}
	temp=curr->addr;
	curr->addr=temp->addr;
	temp->addr=NULL;
	free(temp);
}
