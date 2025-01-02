#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int arr[5],i,ch;
	int search,flag=0;
	
	do
	{
	
	printf("Enter any Five numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	  printf("\nEnter elemnt to seaarch in array : ");
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
	  printf("\nFor Continue Press 1...");
	  scanf("%d",&ch);
    }while(ch==1);
	return 0;
}
