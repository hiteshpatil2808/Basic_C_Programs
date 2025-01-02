#include <stdio.h>
#include <stdlib.h>

/* without argument with return type */

int add();
int sub();
int main() 
{
	int s,s1;
	s=add();
	printf("\nAddition is : %d",s);
	printf("\n---------------------------");
    s1=sub();
	printf("\nSubtraction is : %d",s1);
	
	return 0;
}
int add()
{
	int n1,n2,sum;
	printf("\nEnter any two numbers : ");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	
	return sum;
}
int sub()
{
	int a1,a2,subt;
	printf("\nEnter any two numbers : ");
	scanf("%d%d",&a1,&a2);
	subt=a1-a2;
	
	return subt;	
}
