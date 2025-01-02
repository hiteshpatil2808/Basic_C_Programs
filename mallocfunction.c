#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	int ch;
	int sum=0,cnt=0;
	do
	{
		cnt++;
		p=(int*)malloc(sizeof(int));
		printf("\nEnter Number : ");
		scanf("%d",p);
		sum=sum+*p;
		printf("\nDo you want to add more numbers press 1...");
		scanf("%d",&ch);
	}while(ch==1);
	printf("\nSum of %d numbers is : %d",cnt,sum);
	return 0;
}
