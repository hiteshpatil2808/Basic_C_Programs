#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[5];
	int i,sum,avg,a;
	
	printf("Enter salary of five employees : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sum=0;
	
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	
	avg=sum/5;
	
	printf("\nAverage salary of employees is : %d",avg);
	a=1;
	
	printf("\nEmployees salary more than average : ");
	for(i=0;i<5;i++)
	{
		if(arr[i]>avg)
		{
			printf("\n%d) %d",a,arr[i]);
			a++;
		}
    }
    
    a=1;
    printf("\nEmployees salary less than average : ");
    for(i=0;i<5;i++)
    {
    	if(arr[i]<avg)
    	{
    		printf("\n%d) %d",a,arr[i]);
    		a++;
		}
	}
	
	a=1;
	printf("\nEmployees salary equal to average : ");
	for(i=0;i<5;i++)
	{
		if(arr[i]==avg)
		{
			printf("\n%d) %d",a,arr[i]);
			a++;
		}
	}
	
	return 0;
}
