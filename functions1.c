#include <stdio.h>
#include <stdlib.h>

/* With argument and without data type... */

void add(int,int);
int main() 
{
	int n1,n2;
	printf("\nEnter any two numbers : ");
	scanf("%d%d",&n1,&n2);
	add(n1,n2);
	
	return 0;
}
void add(int a,int b)//instead of a & b we can take any variable. a=n1 & b=n2.we can also use n1 & n2.
{
	int add1;
	add1=a+b;
	printf("\nAddition is : %d",add1);
}
