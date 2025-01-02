#include <stdio.h>
#include <stdlib.h>

int main() 
{
/*	int mat[3][3]={
	               {10,20,30},
				   {40,50,60},
				   {70,80,90}
				   };*/
	int i,j;
	int mat[3][3];
	printf("Enter the elements in array : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("\nElements in array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}			   
	    
	return 0;
}

