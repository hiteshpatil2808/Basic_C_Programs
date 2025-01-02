#include <stdio.h>
#include <stdlib.h>

float circlearea(float);
int main() 
{
	float r,c;
	printf("\nEnter radius of circle : ");
	scanf("%f",&r);
	c=circlearea(r);
	printf("\nArea of circle is : %0.2f",c);
	
	return 0;
}
float circlearea(float a)
{
	float ca;
	ca=3.14*a*a;
	return ca;
}
