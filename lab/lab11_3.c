#include<stdio.h>
struct student {
    char name[50];
    int roll_num;
    float marks;
    char faculty[50];
    float fee;
};
void display(){
    struct student s;
    struct student *p = &s;
    printf("Name : ");
    scanf("%s", p->name);
    printf("Roll No. : ");
    scanf("%d", &p->roll_num);
    printf("Marks : ");
    scanf("%f", &p->marks);
    printf("Faculty : ");
    scanf("%s", p->faculty);
    printf("Fee : ");
    scanf("%f", &p->fee);

    printf("Following are the details of the student\nName : %s\nRoll No.: %d\nMarks : %f\nFaculty : %s\nFee : %f\n", p->name, p->roll_num, p->marks, p->faculty, p->fee);
}

void main(){
    display();

}