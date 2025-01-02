#include <stdio.h>
#include <stdlib.h>

void circlearea();
int main() 
{
	circlearea();
	return 0;
}
void circlearea()
{
	float r,ca;
	printf("\nEnter radius of circle : ");
	scanf("%f",&r);
	ca=3.14*r*r;
	printf("\nArea of circle is : %0.2f",ca);
}
