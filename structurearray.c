#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int rollno;
	char sname[10];
	float perct;
};
int main() 
{
	int i;
	
	struct Student stud[3];
	for(i=0;i<3;i++)
	{
		printf("\n\nEnter the student roll number : ");
	scanf("%d",&stud[i].rollno);
	printf("\nEnter the student name : ");
	scanf("%s",stud[i].sname);
	printf("\nEnter the student percentage : ");
	scanf("%f",&stud[i].perct);
	}
	printf("\n\n<><><><><><><><><><><><><><><><><><><><><>");
	for(i=0;i<3;i++)
	{
	printf("\n\n\nName of Student : %s",stud[i].sname);
	printf("\nRoll no of Student : %d",stud[i].rollno);
	printf("\nPercentage of Student : %0.2f",stud[i].perct);

	}
    return 0;
}
