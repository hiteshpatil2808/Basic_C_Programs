#include <stdio.h>
#include <stdlib.h>

int display(int [],int);
#define max 20
int main() 
{
	int arr[20],n,i;
	printf("\nHow many numbers do you want in array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nSum of %d numbers is : %d",n,display(arr,n));
	return 0;
}
int display(int arr[],int n)
{
	int i,sum=0;
	printf("\nElements in the array are :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
		sum=sum+arr[i];
	}
	return sum;
}
