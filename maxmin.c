#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[10];
	int i,max,min;
	
	printf("Enter any ten numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nMax value is : %d",max);
    printf("\nMin value is : %d",min);

	return 0;
}
