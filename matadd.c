#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,j;
	int mat1[3][3],mat2[3][3],mat3[3][3];
	
	printf("\nEnter Elements in Matrix 1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\nEnter Elements in Matrix 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	printf("\n==========MATRIX ADDITION============\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
