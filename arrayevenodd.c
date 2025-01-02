#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    int arr[10];
    int even=0,odd=0;
    int sum=0,evensum=0,oddsum=0;
    
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
    	scanf("%d",&arr[i]);
    	sum=sum+arr[i];
    	if(arr[i]%2==0)
    	{
    		even++;
    		evensum=evensum+arr[i];
		}
		else
		{
			odd++;
			oddsum=oddsum+arr[i];
		}
	}
	printf("\nTotal sum of numbers is : %d",sum);
	printf("\nTotal even numbers are : %d \nSum of total even numbers is : %d",even,evensum);
	printf("\nTotal odd numbers are : %d \nSum of total odd numbers is : %d",odd,oddsum);
	printf("\nEven numbers are : ");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%5d",arr[i]);
		}
	}
    
    printf("\nOdd numbers are : ");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%5d",arr[i]);
		}
	}
	return 0;
}
