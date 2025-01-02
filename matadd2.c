#include <stdio.h>
#include <stdlib.h>

#define max 20
int main() 
{
	int i,j;
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int n,m,a,b;
	
	printf("\nEnter the rows and columns with Elements in Matrix 1 : \n");
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\nEnter the rows and columns with Elements in Matrix 2 : \n");
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	printf("\n==========MATRIX ADDITION============\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
