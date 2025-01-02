#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*start;

void create(int);
void display();
void insertfirst(int);
void insert(int,int);
void deletefirst();
void delete1(int);
void reverse();

int main() 
{
	int n,ch,location;
	start=NULL;
	do
	{
		printf("\n1-Create\n2-Display\n3-Insert at first location\n4-Insert at any location\n5-Delete first node\n6-Delete any node\n7-Print Reverse");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter the number to insert in Linked List : ");
			scanf("%d",&n);
			create(n);
			printf("\nElement %d inserted successfully...",n);
		}
		else if(ch==2)
		{
			display();
		}
		else if(ch==3)
		{
			printf("\nEnter the number to insert in firt location of linked list : ");
			scanf("%d",&n);
			insertfirst(n);
			printf("\nElement %d inserted successfully at first location...",n);
		}
		else if(ch==4)
		{
			printf("\nEnter the number to insert in linked list : ");
			scanf("%d",&n);
			printf("\nEnter the location in linked list to add node : ");
			scanf("%d",&location);
			insert(n,location);
			printf("\nElement %d inserted successfully at %d location...",n,location);
		}
        else if(ch==5)
        {
        	deletefirst();
        	printf("\nFirst node deleted successfully...")
		}
		else if(ch==6)
		{
			printf("\nEnter the location do you want delete : ");
			scanf("%d",&location);
			delete1(location);
			printf("\nNode of %d location deleted successfully...",location);
		}
		else if(ch==7)
		{
			reverse();
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

void insertfirst(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=start;
	start=newnode;
}

void insert(int n,int location)
{
	struct Node *newnode,*curr,*temp;
	int count=1;
	curr=start;
	while(count<location-1)
	{
		curr=curr->addr;
		count++;
	}
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	temp=curr->addr;
	curr->addr=newnode;
	newnode->addr=temp;
}

void deletefirst()
{
	struct Node *curr=NULL;
	curr=start;
	start=start->addr;
	curr->addr=NULL;
	free(curr);
}

void delete1(int location)

{
	struct Node *curr,*temp;
	int count=1;
	curr=start;
	while(count<location-1)
	{
		curr=curr->addr;
		count++;
	}
	temp=curr->addr;
	curr->addr=temp->addr;
	temp->addr=NULL;
	free(temp);
}

void reverse()
{
	printf("Yet to complete");
}

