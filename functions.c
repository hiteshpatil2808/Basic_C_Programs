#include <stdio.h>
#include <stdlib.h>

//without argument and without return type...
void add();
void circlearea();
int main() 
{
	int ch;
	printf("\n1-Addition\n2-Circle Area");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	if(ch==1)
	{
		add();
	}
	if(ch==2)
	{
		circlearea();
	}

	return 0;
}
void add()
{
	int n1,n2,add;
	printf("\nEnter any two numbers : ");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf("Addition is : %d",add);
}
void circlearea()
{
	int r;
	float carea;
	printf("\nEnter the radius of circle : ");
	scanf("%d",&r);
	carea=3.14*r*r;
	printf("\nArea of circle is : %0.2f ",carea);
}
