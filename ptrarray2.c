#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int arr[5]={10,20,30,40,50};
	int i;
	int *ptr;
	ptr=&arr[4];
	
	printf("\n");
	
    /*for(i=4;i>=0;i--)
	{
		printf("\n%d",*ptr);
		ptr--;
	}
	*/
	/*for(i=4;i>=0;i--)
	{
		printf("\n%5d",*(ptr+i));
	}*/
	
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr-i));
	}
	
	return 0;
}
