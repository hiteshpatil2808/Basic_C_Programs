#include <stdio.h>
#include <stdlib.h>

void display(int []);
int main() 
{
	int arr[5]={10,20,30,40,50};
	display(arr);
	return 0;
}

void display(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
}
