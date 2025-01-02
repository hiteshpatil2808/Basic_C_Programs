
/* Queue With Linked List*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*rear=NULL,*front=NULL;
int queue[];

void createQ(int);
void displayQ();

int main(int argc, char *argv[]) {
		int ch,n;
	do
	{
		printf("\n\n\t\t*****MENU*****");
		printf("\n\t#1 - Insert Q");
		printf("\n\t#2 - Delete  Q");
		printf("\n\t#3 - Display Q");
		printf("\n\t#0 - Exit");
		
		printf("\n\n\tEnter you choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\n\tEnter a data to insert in Queue : ");
				scanf("%d",&n);
				createQ(n);
				printf("\n\tData inserted in Queue...");
				break;
			case 2:
				deleteQ();
				break;
			case 3:
				displayQ();
				break;
			case 0:
				printf("\n\n\t\t*****Thank You*****");
				break;
			default :
				printf("\nEnter correct choice...");
    	}
	    }while(ch!=0);
	return 0;
}

void createQ(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	if(rear==NULL)
	{
		newnode->addr=rear;
		rear=newnode;
		front=newnode;
	}	
	else
	{
		rear->addr=newnode;
		rear=newnode;
	}
}

void deleteQ()
{
	if(front==NULL)
	{
		printf("Queue is empty...");
	}
	else
	{
	   	struct Node *temp;
        temp=front;
	    front=front->addr;
	    temp->addr=NULL;
	    printf("\n\tData deleted from Queue is : %d",temp->data);
    	free(temp);
	}
}

void displayQ()
{
	struct Node *temp;
	for(temp=front;temp!=rear;temp=temp->addr)
	{
		printf("\n\t%d",temp->data);
	}
	printf("\n\t%d",rear->data);
}
