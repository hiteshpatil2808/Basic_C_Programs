#include <stdio.h>
#include <stdlib.h>


int main() 
{
		int arr[5],i,ch,ch1;
	int search,flag;
	
	do
	{
	
	printf("Enter any Five numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n1-Display\n2-Search");
	printf("\nEnter your choice : ");
	scanf("%d",&ch1);
	
	if(ch1==1)
	{
	
	 printf("\nElements are :");
	   for(i=0;i<5;i++)
	   {
	    	printf("%5d",arr[i]);
		
	   }
    }
    
    else if(ch1==2)
    {
    	flag=0;
	  printf("\nEnter elemnt to search in array : ");
	  scanf("%d",&search);
	  for(i=0;i<5;i++)
	  {
		if(arr[i]==search)
		{
			flag=1;
			break;
		}
	  }
	  if(flag==1)
	  {
		printf("\nElemen Found In Array");
	  }
	  else
	  {
		printf("\nElemen Not Found In Array");
	  }
    }
    
    else
    {
    	printf("Invalid");
	}
	  printf("\n\nFor Continue Press 1...");
	  scanf("%d",&ch);
    }while(ch==1);
	
	return 0;
}
