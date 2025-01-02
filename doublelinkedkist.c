#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *addr_next;
	struct Node *addr_prev;
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
			display();
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
		}
		else if(ch==4)
		{
			printf("\nEnter the number to insert in linked list : ");
			scanf("%d",&n);
			printf("\nEnter the location in linked list to add node : ");
			scanf("%d",&location);
			insert(n,location);
		}
        else if(ch==5)
        {
        	deletefirst();
		}
		else if(ch==6)
		{
			printf("\nEnter the location do you want delete : ");
			scanf("%d",&location);
			if(location==1)
			{
				deletefirst();
			}
			else
			{
				delete1(location);
			}
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
	newnode->addr_next=NULL;
	newnode->addr_prev=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		curr=start;
		while(curr->addr_next!=NULL)
		{
			curr=curr->addr_next;
		}
		curr->addr_next=newnode;
		newnode->addr_prev=curr;
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
			printf("| %u | %d | %u |-->",curr->addr_prev,curr->data,curr->addr_next);
			curr=curr->addr_next;
		}
	}
}

void insertfirst(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr_next=start;
	newnode->addr_prev=NULL;
	start=newnode;
	printf("\nInserted Successfully...");
}

void insert(int n,int location)
{
	struct Node *newnode,*curr,*temp;
	int count=1;
	curr=start;
	while(count<location-1)
	{
		curr=curr->addr_next;
		count++;
	}
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	temp=curr->addr_next;
	curr->addr_next=newnode;
	newnode->addr_prev=curr;
	temp->addr_prev=newnode;
	newnode->addr_next=temp;
	printf("\nInserted Successfully...");
}

void deletefirst()
{
	struct Node *curr=NULL;
	curr=start;
	start=start->addr_next;
	start->addr_prev=NULL;
	curr->addr_next=NULL;
	free(curr);
    printf("\nDeleted Successfully...");
}

void delete1(int location)
{
	struct Node *curr,*temp,*temp1;
	int count=1;
	curr=start;
	while(count<location)
	{
		curr=curr->addr_next;
		count++;
	}
	temp=curr->addr_prev;
	temp1=curr->addr_next;
	temp->addr_next=curr->addr_next;
	temp1->addr_prev=temp;
	curr->addr_next=NULL;
	curr->addr_prev=NULL;
    free(curr);
    printf("\nDeleted Successfully...");
}

void reverse()
{
	printf("Yet to complete...");
}

