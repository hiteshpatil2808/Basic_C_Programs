#include <stdio.h>
#include <stdlib.h>

void circleArea();
void triangleArea(float,float);
float rectangleArea();
float squareArea(float);
int main() 
{
	float h,b,ra,s,sa;
	circleArea();
	printf("\n------------------------------");
	printf("\nEnter the height and base of triangle : ");
	scanf("%f%f",&h,&b);
	triangleArea(h,b);
	printf("\n------------------------------");
	ra=rectangleArea();
	printf("\nArea of a rectangle is :  %0.2f",ra);//OR printf("\nArea of a rectangle is :  %0.2f",rectangleArea()); 
	printf("\n------------------------------");
	printf("\nEnter a side of a square : ");
	scanf("%f",&s);
	sa=squareArea(s);
	printf("\nArea of a square is : %0.2f",sa);
	return 0;
}

void circleArea()
{
	float r,ca;
	printf("\nEnter the radius of circle : ");
	scanf("%f",&r);
	ca=3.14*r*r;
	printf("\nArea of a circle is : %0.2f",ca);
}

void triangleArea(float h,float b)
{
	float ta;
	ta=0.5*h*b;
	printf("\nArea of a triangle is : %0.2f",ta);
}

float rectangleArea()
{
	float l,b,ra;
	printf("\nEnter a length and base of a rectangle : ");
	scanf("%f%f",&l,&b);
	ra=l*b;
	return ra;
}

float squareArea(float s)
{
	float sa1;
	sa1=s*s;
	return sa1;
}
