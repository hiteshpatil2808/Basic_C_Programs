#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[5]={10,20,30,40,50};
	int i,sum=0,a;
	int *ptr;
	ptr=&arr[0];
	
	printf("\nFirst Element  : %d and Address is : %u",*(ptr+0),(ptr+0));
	printf("\nSecond Element : %d and Address is : %u",*(ptr+1),(ptr+1));
	printf("\nThird Element  : %d and Address is : %u",*(ptr+2),(ptr+2));
	printf("\nForth Element  : %d and Address is : %u",*(ptr+3),(ptr+3));
	printf("\nFifth Element  : %d and Address is : %u",*(ptr+4),(ptr+4));
	
	printf("\n----------------------------------------------------------");
	
	a=1;
	printf("\nElements in array using for loop : ");
	for(i=0;i<5;i++)
	{
		printf("\n%d)Element : %d => Address : %u",a,*(ptr+i),(ptr+i));
		a++;
		
		sum=sum+*(ptr+i);
	}
	
	printf("\n----------------------------------------------------------");
	
	printf("\n\nReverse is");
	for(i=4;i>=0;i--)
	{
		printf("%5d",*(ptr+i));
	}
	
	printf("\n----------------------------------------------------------");
	
	printf("\n\nSum of array elements is %d : ",sum);
	
	return 0;
}
