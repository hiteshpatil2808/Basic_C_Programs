
#include <stdio.h>

struct Node
{
	int data;
	struct Node *addr;
}*top;

void push(int);
void pop();
void display();

int main() 
{
	int choice,n;
	do
	{
		
    	printf("\n\n\n***==========MENU==========***\n");
    	printf("\n1 - Push\n2 - Pop\n3 - Display\n0 - Exit");
		
    	printf("\n\nPlease enter your choice : ");
    	scanf("%d",&choice);
	
    	switch(choice)
    	{
    		case 1:    //Push
	   		printf("\nEnter the elements to be pushed : ");
    		scanf("%d",&n);
    		
			push(n);
    		printf("\n%d Pushed...",n);
			
    		break;
    	case 2:
			pop();
    		break;
    		
    	case 3:
			display();
			break;
			
		case 0:
			printf("----THANK YOU---");
			break;
			
    	default :
			printf("Enter valid choice...");
    }
	}while(choice!=0);
	
	return 0;
}

void push(int n)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		newnode->addr=top;
		top=newnode;
	}
}

void pop()
{
	struct Node *temp;
	if(top==NULL)
   	{
  		printf("Stack is empty...");
	}
	else
	{
    	temp=top;
    	top=top->addr;
    	temp->addr=NULL;
    	printf("\n%d Popped...",temp->data);
		free(temp);
    	
	}
	
}

void display()
{
	struct Node *curr;
	if(top==NULL)
	{
		printf("\nStack is empty...");
	}
	else
	{
		curr=top;
		while(curr!=NULL)
		{
			printf("\n%d",curr->data);
			curr=curr->addr;
		}
	}
}
