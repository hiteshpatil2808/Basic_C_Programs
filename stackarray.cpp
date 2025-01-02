/* PROGRAM TO IMPLEMENT STACK OF 5 ELEMENTS */

#include<stdio.h>

#define SIZE 5
int main() 
{
	int stack[SIZE],top=-1,elt,choice,i,n;
	
	do
	{
		printf("\n\n\n***==MENU==**\n");
		printf("\n1 - Push\n2 - Pop\n3 - Display\n0 - Exit");
		
		printf("\n\nPlease enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:    //Push
	    		printf("\nEnter the elements to be pushed : ");
	    		scanf("%d",&elt);
		    	if(top == SIZE-1)
		    	{
		    		printf("\nStack is full...");
		    	}
	    		else
		    	{
		    		stack[++top]=elt;     
		    		printf("\n%d Pushed...",elt);
		    	}
		    	break;
			
			case 2:
				if(top == -1)
				{
					printf("\nStack is empty...");
				}
				else
				{
					printf("\n%d Poped...",stack[top]);
					stack[top]=0;
					top--;
				}
				break;
			
			case 3:
				i=top;
				printf("\nStack : ");
				while(i!=-1)
				{
					printf("\n%d",stack[i]);
					i--;
			    }
				break;
			case 0:
				printf("---Thank you---");
			    break;
			    
			default : 
				printf("\nEnter Valid Choice");
		}
		}while(choice!=0);
	
	return 0;
}
