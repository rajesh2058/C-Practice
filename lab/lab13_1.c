#include<stdio.h>
#include<stdlib.h>
void main(){
    char name[50];
    int roll_no;
    float marks;
    FILE *p;
    p = fopen("student.txt", "w");
    printf("Enter the student's name, roll number and marks \n");
    scanf("%s%d%f", name, &roll_no, &marks);
    if (p==NULL){
        printf("No such file");
        exit(1);
    }else {
        fprintf(p, "\nName : %s \nRoll Number : %d \nMarks : %.2f \n", name, roll_no, marks);
    }fclose(p);
}