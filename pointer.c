#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1;
	int *ptr;
	ptr=&n1;//address of n1 we can store in ptr variable
	        //which is pointer variableof int type
	
	n1=10;
	
	printf("\nValue of n1 is : %d",n1);
	printf("\nAddress of n1 is : %u",&n1);
	
	printf("\n-------------------------------------");
	printf("\nValue of n1 using pointer is : %d",*ptr);
	printf("\nAddress of n1 using pointer is : %u",ptr);
	
	printf("\n-------------------------------------");
	printf("\nAddress of pointer variable is : %d",&ptr);
	
	return 0;
}
