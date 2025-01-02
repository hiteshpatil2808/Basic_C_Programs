#include <stdio.h>
#include <stdlib.h>

float circlearea();
int main() 
{
    float a;
    a=circlearea();
	printf("\nArea of circle is : %0.2f",a);
	return 0;
}
float circlearea()
{
	float r,ca;
	printf("\nEnter radius of circle : ");
	scanf("%f",&r);
	ca=3.14*r*r;
	return ca;
}
