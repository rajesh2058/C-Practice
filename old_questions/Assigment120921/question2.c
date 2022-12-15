#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age, roll_no;
    float marks;
};

void main(){
    struct student s[3];
    for (int i=0; i<3; i++){
        printf("Enter name, age, roll number and marks of the %d student \n", i+1);
        scanf("%s%d%d%f", s[i].name, &s[i].age, &s[i].roll_no, &s[i].marks);
    }
    if (s[0].marks>s[1].marks){
        if (s[0].marks>s[2].marks){
            printf("The detail of the student with highest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[0].name, s[0].age, s[0].roll_no, s[0].marks);
        }else {
            printf("The detail of the student with highest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[2].name, s[2].age, s[2].roll_no, s[2].marks);
        }
    }else {
        if (s[0].marks>s[2].marks){
            printf("The detail of the student with highest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[1].name, s[1].age, s[1].roll_no, s[1].marks);
        }else {
            printf("The detail of the student with highest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[2].name, s[2].age, s[2].roll_no, s[2].marks);
        }
    }

    if (s[0].marks<s[1].marks){
        if (s[0].marks<s[2].marks){
            printf("The detail of the student with lowest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[0].name, s[0].age, s[0].roll_no, s[0].marks);
        }else {
            printf("The detail of the student with lowest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[2].name, s[2].age, s[2].roll_no, s[2].marks);
        }
    }else {
        if (s[0].marks<s[2].marks){
            printf("The detail of the student with lowest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[1].name, s[1].age, s[1].roll_no, s[1].marks);
        }else {
            printf("The detail of the student with lowest marks \nName : %s \nAge : %d \nRoll Number : %d \nMarks : %f \n", s[2].name, s[2].age, s[2].roll_no, s[2].marks);
        }
    }
    float avg = (s[0].marks + s[1].marks + s[2].marks)/3;
    printf("The average of the marks of all students is %f", avg);
    float sum = s[0].marks + s[1].marks + s[2].marks;
    printf("The average of the marks of all students is %f", sum);
}