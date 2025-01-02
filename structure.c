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
	struct Student stud;
	printf("\nSize of int Student is : %d",sizeof(stud.rollno));
	printf("\nSize of name Student is : %d",sizeof(stud.sname));
	printf("\nSize of perct Student is : %d",sizeof(stud.perct));
	printf("\nSize of structure Student is : %d",sizeof(stud));
	printf("\n\nEnter the student roll number : ");
	scanf("%d",&stud.rollno);
	printf("\nEnter the student name : ");
	scanf("%s",stud.sname);
	printf("\nEnter the student percentage : ");
	scanf("%f",&stud.perct);
	printf("\n\n<><><><><><><><><><><><><><><><><><><><><>");
	printf("\n\n\nName of Student : %s",stud.sname);
	printf("\nRoll no of Student : %d",stud.rollno);
	printf("\nPercentage of Student : %0.2f",stud.perct);
    return 0;
}
