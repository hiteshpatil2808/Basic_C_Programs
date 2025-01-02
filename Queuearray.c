
//Queue Program using Array... 

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
				data=deleteQ();
				if(data!=-1)
				{
					printf("\n\tThe popped data is : %d",data);
				}
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
	if(rear==M)
	{
		printf("\n queue is full...");
		return;
	}
	else
	{
		que[rear]=data;
		rear++;
	}
}

int deleteQ()
{
	int d;
	if(front==rear)
	{
		printf("\n queue is empty...");
		return -1;
	}
	else
	{
		d=que[front];
		front++;
		return d;
	}
}

void displayQ()
{
	int i;
	for(i=front;i<rear;i++)
	{
		printf("\n");
		printf("%d",que[i]);
	}
}
