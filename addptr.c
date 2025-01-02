#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1,n2;
	int sum,sub,mult,div;
	int *ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6;
	
	ptr1=&n1;
	ptr2=&n2;
	ptr3=&sum;
	ptr4=&sub;
	ptr5=&mult;
	ptr6=&div;
	
	printf("\nEnter the two numbers for addition : ");
	scanf("%d%d",ptr1,ptr2);//OR scanf("%d%d",&*ptr1,&*ptr2);
	
	printf("\n\nValue of First number is %d : ",*ptr1);
	printf("\n\nValue of Second number is %d : ",*ptr2);
	
	printf("\n\n<><><><><><><><><><><><><><><><><><><>");
	//Addition
	*ptr3=*ptr1+*ptr2;
	printf("\n\nAddition is : %d",*ptr3);
	
	printf("\n\n--------------------------------------");
	//Subtraction
	*ptr4=*ptr1-*ptr2;
	printf("\n\nSubtraction is : %d",*ptr4);
	
	printf("\n\n--------------------------------------");
	//Multiplication
	*ptr5=*ptr1**ptr2;
	printf("\n\nMultiplication is : %d",*ptr5);
	
	printf("\n\n--------------------------------------");
	//Division
	*ptr6=*ptr1/ *ptr2;
	printf("\n\nDivision is : %d",*ptr6);

	return 0;
}
