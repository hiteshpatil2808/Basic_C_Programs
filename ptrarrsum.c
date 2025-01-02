#include <stdio.h>
#include <stdlib.h>

# define max 20
int main() 
{
	int arr[max];
    int n,i;
    int sum=0;
    int *ptr;
    ptr=&arr[0];
    
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter elements in array : ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&*(ptr+i));
	}
	printf("\n----------------------------------------------------------");
	printf("\nElements in array are : ");
	for(i=0;i<n;i++)
	{
		printf("%5d",*(ptr+i));
	}
	printf("\n----------------------------------------------------------");
	for(i=0;i<n;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("\n\nSum of elements in array is : %d",sum);
	
	return 0;
}
