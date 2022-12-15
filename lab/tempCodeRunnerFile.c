#include<stdio.h>
struct detail
{
	int rn;
	float marks,fee;
	char name[10],faculty[10];
};

int fun();
int fun()
{
	struct detail d;
	printf("Enter the name roll number marks fee and faculty of student 1:\n");
	scanf("%s %d %f %f %s:",d.name,&d.rn,&d.marks,&d.fee,d.faculty);
	printf("the name roll number marks fee and faculty of student 1 is:\n");
	printf("%s %d %f %f %s:", d.name,d.rn,d.marks,d.fee,d.faculty);
	return 0;
}
int main ()
{
	fun();
	return 0;
}