
#include <stdio.h>
#include <stdlib.h>

void insert(int num,int prio);
void display();
void del();

struct Node
{
	int priority;
	int data;
	struct Node *addr_next;
}*front=NULL,*temp,*q,*ptr;

int main() 
{
	char choice='y';
	
	int action,n,prio;
	
	while(1)
	{
    	printf("1) Insert\n2) Delete\n3) Display\n 0)Exit");



	
	    printf("\nEnter Your Choice : ");
	    scanf("%d",&action);
	    
	    switch(action)
	    {
	    	case 1:
	    		choice='y';
	    		
	    		while(choice=='y'||choice=='Y')
	    		{
	    			printf("\nEnter a number and priority : ");
	    			scanf("%d %d",&n,&prio);
	    			insert(n,prio);
	    			printf("\n");
	    			display();
	    			printf("\t\t\t\t\t\t\t\tContinue ? \n");
	    			scanf("%c",&choice);
				}
				getch();
	    		break;
	    		case 2:
	    			choice='y';
	    			while(choice=='y'||choice=='Y')
	    			{
	    				del();
	    				printf("\n");
	    				display();
	    				printf("\t\t\t\t\t\t\tContinue ? \n");
	    				scanf(" %c",&choice);
					}
					getch();
	    			break;
	    		case 3:
	    			display();
		    		break;	
		    	case 4:
					//exit();
					break;
		}
		
	}
	
	return 0;
}

void insert(int num,int prio)
{
	temp=malloc(sizeof(struct Node));
	temp->data=num;
	temp->priority=prio;
	
	if(front==NULL||prio<front->priority)   
	{
		temp->addr_next=front;
		front=temp;
	}
	else
	{
		q=front;
		while(q->addr_next!=NULL && q->addr_next->priority<=prio)
		{
			q=q->addr_next;
		}
		
		temp->addr_next=q->addr_next;
		q->addr_next=temp;
	}
}

void display()
{
	ptr=front;
	if(front==NULL)
	{
		printf("\nQueue is empty...");
	}
	else
	{
		printf("Data \t Priority\n");
		while(ptr!=NULL)
		{
			printf("%d \t %d \n",ptr->data,ptr->priority);
			ptr=ptr->addr_next;
		}
	}
}
void del()
{
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		temp=front;
		front=front->addr_next;
		free(temp);
	}
}
