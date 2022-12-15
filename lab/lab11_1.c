#include<stdio.h>
struct student {
    char name[50];
    int roll_num;
    float marks;
    char faculty[50];
    float fee;
};
void main(){
    struct student s = {"Ram", 25, 25.2, "BE", 25000};
    printf("Following are the details of the student\nName: %s\nRoll No. : %d\nMarks : %f\nFaculty : %s\nFee : %.2f\n", s.name, s.roll_num, s.marks, s.faculty, s.fee);
}