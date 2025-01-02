#include <stdio.h>
#include <stdlib.h>

#define max20
int main() {
	int i,j,max;
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int n,m,a,b;
	int flag=0;
	
	printf("\nEnter number of rows and columns in matrix1 : ");
	scanf("%d%d",&n,&m);
	printf("\nEnter number of rows and columns in matrix2 : ");
	scanf("%d%d",&a,&b);
	
	if((n==a)&&(m==b))
	{
		flag=1;
	}
	else
	{
		printf("Addition not possible...");
	}
	
	if(flag==1)
	{
	printf("\nEnter Elements in Matrix 1 : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\nEnter Elements in Matrix 2 : \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
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
	}
	
	return 0;
}
