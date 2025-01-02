#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1;
	int *ptr;
	
	n1=10;
	ptr=&n1;
	
	printf("\nValue of n1 is : %d",n1);
	printf("\nAddress of n1 is : %u",&n1);
	
	printf("\n\nValue of n1 using pointer is : %d",*ptr);
	printf("\nAddress of n1 using pointer is : %u",ptr);
	
	printf("\n\nAddress of pointer is : %d",&ptr);
	
	return 0;
}
