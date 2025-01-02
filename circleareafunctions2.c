#include <stdio.h>
#include <stdlib.h>

void circlearea(float);
int main() 
{
	float r;
	printf("\nEnter radius of circle : ");
	scanf("%f",&r);
	circlearea(r);
	return 0;
}
void circlearea(float a)
{
	float ca;
	ca=3.14*a*a;
	printf("\nArea of circle is : %0.2f",ca);
}
