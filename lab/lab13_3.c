#include<stdio.h>
#include<stdlib.h>
void main(){
    char name[50];
    int roll_no;
    float marks;
    FILE *p;
    p = fopen("student.txt", "a");
    if (p==NULL){
        printf("No such file");
        exit(1);
    }else {
        for (int i=0; i<2; i++){
            printf("\nEnter the student's name, roll number and Marks of %d student \n", i+1);
            scanf("%s%d%f", name, &roll_no, &marks);
            fprintf(p, "\nName : %s \nRoll Number : %d \nMarks : %.2f \n", name, roll_no, marks);
        }
    }fclose(p);
}