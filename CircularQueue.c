
#include <stdio.h>
#include <stdlib.h>

#define M 5
int que[M];
int front=0,rear=0;

void insertQ(int);
int deleteQ();
void displayQ();

int main() 
{
	int ch,data;
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
				printf("Enter a data to insert in Q : ");
				scanf("%d",&data);
				insertQ(data);
				break;
			case 2:
				deleteQ();
				break;
			case 3:
				printf("The list of data in queue is : ");
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

void insertQ(int data)
{
	if((front==0)&&(rear==M-1)||(front==rear+1))
	{
    	printf("\n queue is full...");
	    
	}
	else
	{
		if(rear==M-1)
		{
			rear=0;
			que[rear]=data;
		}
		else
		{
			que[++rear]==data;
		}
	}
}

int deleteQ()
{
	printf("%d",que[front]);   
	que[front]=0;
	front++;
}

void displayQ()
{
	int i=0;
	
	for(i=front;i!=rear;i++)
	{
		printf("\n");
		printf("%d",que[i]);
	}
}
