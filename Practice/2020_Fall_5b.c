#include<stdio.h>
#include<stdlib.h>
struct employee{
    char name[50], address[50], department[50];
    long phone;
    float salary;
};

void main(){
    struct employee e;
    FILE *p;
    p = fopen("Employee.txt", "w+");

    char department[50] = " ";


    for (int i=0; i<1; i++){
        printf("Enter the detail of %d employee\n", i+1);
        printf("Name : ");
        scanf("%s", e.name);
        printf("Address : ");
        scanf("%s", e.address);
        printf("Phone Number : ");
        scanf("%ld", &e.phone);
        printf("Salary : ");
        scanf("%f", &e.salary);
        printf("Department : ");
        scanf("%s", e.department);

        // fprintf(p," %s\n%s\n%ld\n%f\n%s\n", e.name, e.address, e.phone, e.salary, e.department);
        fwrite(&e, sizeof(e), 1, p);

    }int flag = 0;
    printf("Which department do you wanna search ? \n");
    scanf("%s", department);
    while(fread(&e, sizeof(e), 1, p) > 0 && flag==0){
        if (e.department == department){
            flag = 1;
            printf("Record is found \n");
            printf("%s %s %ld %f %s", e.name, e.address, e.phone, e.salary, e.department);
        }
    }if (flag == 0) printf("No such department\n");
    
}