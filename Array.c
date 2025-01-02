#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,ch,ch1;
	int arr[10];
	do
	{
	printf("\n1-Print\n2-Reverse print");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("\nEnter any 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	   printf("\nElements are :");
	   for(i=0;i<10;i++)
	   {
	    	printf("%5d",arr[i]);
		
	   }  
    }
    else if(ch==2)
    {
    	printf("\nEnter any 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
     printf("\nElements are :");
	   for(i=9;i>=0;i--)
	   {
	    	printf("%5d",arr[i]);
		
	   }	
	}
	
	else
	{
		printf("Invalid");
	}
	printf("\nIf you want to continue press 1...");
	scanf("%d",&ch1);
    }while(ch1==1);
	
	
	return 0;
}
