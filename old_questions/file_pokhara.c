#include<stdio.h>
#include<stdlib.h>
struct dob{
    int dd, mm, yy;
};
struct student{
    int roll;
    char name[50], add[50], faculty[50];
    struct dob d;

};
void main(){
    FILE *p;
    p = fopen("student.txt", "a");
    
}