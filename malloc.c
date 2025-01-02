#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int ch;
	int *p,sum=0,a=0;
	float avg;
	
	
	do
	{
		p=malloc(sizeof(int)); //n=(int*)malloc(sizeof(int));   20 bites.
		
		printf("\nEnter any number : ");
		scanf("%d",p);
		
		sum=sum+*p;
		
		printf("\nYour number is : %d ",*p);
		
		printf("\nDo you want to continue press 1 : ");
		scanf("%d",&ch);
		
		a++;
		
		printf("\n-------------------------------------");
	}while(ch==1);
	
	printf("\nSum of numbers is : %d ",sum);
	
	avg=(float)sum/a;
	
	printf("\nAverage of numbers is : %0.2f ",avg);
	
	return 0;
}
