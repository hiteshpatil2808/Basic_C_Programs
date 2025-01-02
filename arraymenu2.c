#include <stdio.h>
#include <stdlib.h>

#define max 20
int main() 
{
	int i,ch,n,flag;
	int arr[max],search;
	
	do
	{
		printf("\n1-Create\n2-Display\n3-Search\n4-Insert\n5-Delete\n6-Sort");
	    printf("\n Enter your choice : ");
	    scanf("%d",&ch);
	
	    switch(ch)
	    {
	    	case 1:
	    		printf("\nHow many elements do you want in arraymax size is 20 : ");
	    		scanf("%d",&n);
	    		for(i=0;i<n;i++)
	    		{
	    			scanf("%d",&arr[i]);
				}
	    		break;
	    		
	    	case 2:
	    		printf("Elements in array : ");
	    		for(i=0;i<n;i++)
	    		{
	    			printf("%5d",arr[i]);
				}
	    		break;
	    		
	    	case 3:
	    		printf("Enter a element to be search in array : ");
	    		scanf("%d",&search);
	    		flag=0;
	    		for(i=0;i<n;i++)
	    		{
	    			if(arr[i]==search)
	    			{
	    				flag=i;
	    				break;
					}
				}
				if(flag)
				{
					printf("\nElement found in array at %d location",flag-1);
				}
				else
				{
					printf("\nElement not  found");
				}
			    break;	
	    			
	    }
	    printf("\nDo you want to continue press 1...");
	    scanf("%d",&ch);
	}while(ch==1);
	return 0;
}
