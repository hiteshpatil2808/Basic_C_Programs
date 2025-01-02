#include <stdio.h>
#include <stdlib.h>

void display(char,int,int,int,int,int,float);
int main() 
{
	char sname[20];
	int total,rollno;
	int smarks1,smarks2,smarks3;
	float percentage;
	printf("\nEnter the full name of students : ");
	scanf("%s",&sname);
	printf("\nEnter the Roll number of students : ");
	scanf("%d",&rollno);
	printf("\nEnetr the Marks of studedents : ");
	printf("\nSubject 1 Marks : ");
	scanf("%d",&smarks1);
	printf("\nSubject 2 Marks : ");
	scanf("%d",&smarks2);
	printf("\nSubject 3 Marks : ");
	scanf("%d",&smarks3);

	display(char sname[20],
	int total,int rollno,
	int smarks1,int smarks2,int smarks3,
	float percentage);
	return 0;
}
void display(sname,smarks1,smarks2,smarks3)
{
	total=smarks1+smarks2+smarks3;
	percentage=total/3;
	printf("\nName of Student : %s",sname);
	printf("\nRoll Number : %d",rollno);
	printf("\nSubject 1 Marks : %d",smarks1);
	printf("\nSubject 2 Marks : %d",smarks2);
	printf("\nSubject 3 Marks : %d",smarks3);
	printf("\nTotal Marks : %d",total);
	printf("\nPercentage : %0.2f",percentage);
	
}
