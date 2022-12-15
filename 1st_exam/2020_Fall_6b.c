// 2020 Fall 6b
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    char name[50], address[50];
    int num, salary;
    char department[50];
};
void main(){
    struct emp e[500];
    FILE *fp;
    fp = fopen("Employee.txt","w");
    for (int i=0; i<5; i++){
        printf("Name : ");
        scanf("%s", e[i].name);
        printf("Address : ");
        scanf("%s", e[i].address);
        printf("Phone Number : ");
        scanf("%d", &e[i].num);
        printf("Salary : ");
        scanf("%d", &e[i].salary);
        printf("Department : ");
        scanf("%s", e[i].department);
    }
    for (int i=0; i<5; i++){
        fprintf(fp, "Detail of %d employee \nName : %s\nAddress : %s\nPhone Number : %d\nSalary : %d\nDepartment : %s\n", i+1, e[i].name, e[i].address, e[i].num, e[i].salary, e[i].department);
    }
    printf("Employee whose department is Marketing are \n");
    for (int i=0; i<5; i++){
        if (strcmp(e[i].department, "Marketing") == 0){
            printf("Name : %s\nAddress : %s\nPhone Number : %d\nSalary : %d\nDepartment : %s\n", e[i].name, e[i].address, e[i].num, e[i].salary, e[i].department);
        }
    }fclose(fp);
}