#include <stdio.h>
#include <stdlib.h>

/* With argument and with return  */

int add(int,int);
int sub(int,int);
int main() 
{
	int n1,n2,s,s1;
	printf("Enter any two numbers : ");
	scanf("%d%d",&n1,&n2);
	s=add(n1,n2);
	printf("\nAddition is : %d",s);
	s1=sub(n1,n2);
	printf("\nSubtraction is :%d",s1);
	
	return 0;
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	
	return sum;
}
int sub(int a,int b)
{
	int subt;
	subt=a-b;
	
	return subt;
}
