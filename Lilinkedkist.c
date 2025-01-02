#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*start;

void create();
void display();

int main() 
{
	int n,ch;
	start=NULL;
	do
	{
		printf("\n1-Create\n2-Display");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter the number to insert in Linked List : ");
			scanf("%d",&n);
			create(n);
		}
		else if(ch==2)
		{
			display();
		}
		else
		{
			printf("\nInvalid Choice..");
		}
		printf("\nDo you want to continue press 1...");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
}

void create(int n)
{
	struct Node *newnode,*curr;
	
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		curr=start;
		while(curr->addr!=NULL)
		{
			curr=curr->addr;
		}
		curr->addr=newnode;
	}
}

void display()
{
	struct Node *curr;
	if(start==NULL)
	{
		printf("\nLinked List is Empty...");
	}
	else
	{
		curr=start;
		printf("\n");
		while(curr!=NULL)
		{
			printf("| %d | %u |-->",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}
