#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int rno;
	char sname[10];
	float per;
	int marks1,marks2,marks3,total;
};

struct Student create();
struct Student calculate(struct Student);
void display(struct Student);

int main() 
{
	struct Student stud1;
	stud1=create();
	stud1=calculate(stud1);
	display(stud1);
	return 0;
}

struct Student create()
{
	struct Student stud;
	printf("\nEnter the name of the student : ");
	scanf("%s",stud.sname);
	printf("\nEnter the roll number of the student : ");
	scanf("%d",&stud.rno);
	printf("\nEnter the Marks of the student : ");
	scanf("%d%d%d",&stud.marks1,&stud.marks2,&stud.marks3);
	return stud;
}

struct Student calculate(struct Student stud)
{
	stud.total=stud.marks1+stud.marks2+stud.marks3;
	stud.per=(float)stud.total/3;
	return stud;
}

void display(struct Student stud)
{
	printf("\n----------------------------------------");
	printf("\nName of Student         : %s",stud.sname);
	printf("\nRoll Number of Student  : %d",stud.rno);
	printf("\nMaths Marks             : %d",stud.marks1);
    printf("\nComputer Marks          : %d",stud.marks2);
    printf("\nElectronics Marks       : %d",stud.marks3);
    printf("\n----------------------------------------");
    printf("\nTotal Marks             : %d",stud.total);
    printf("\nPercentage              : %0.2f",stud.per);
}
