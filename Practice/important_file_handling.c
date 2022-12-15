#include <stdio.h>
#include <string.h>
struct DateofBirth
{
    int mm, dd, yy;
};
struct Student
{
    char name[256], address[256], faculty[256];
    int roll;
    struct DateofBirth dob;
};
int main()
{
    struct Student std[5], temp;
    int i;
    FILE *fptr;
    printf("Enter details of 5 students :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d :\n", i + 1);
        printf("Name : ");
        scanf("%[^\n]s",std[i].name);
        printf("Roll no : ");
        scanf("%d", &std[i].roll);
        printf("Address : ");
        scanf("%[^\n]s",std[i].address);
        printf("Faculty :");
        scanf("%[^\n]s",std[i].faculty);
        printf("Date of birth (mm/dd/yy) :");
        scanf("%d%d%d", &std[i].dob.mm, &std[i].dob.dd, &std[i].dob.yy);
    }
    fptr = fopen("student.txt", "w"); //opening in write mode
    for (i = 0; i < 5; i++)
    {
        fprintf(fptr, "\t%s %d %s %s %d-%d-%d\n", std[i].name, std[i].roll,
                std[i].address, std[i].faculty, std[i].dob.mm, std[i].dob.dd, std[i].dob.yy);
    }
    fclose(fptr);
    fptr = fopen("student.txt", "r"); //opening in read mode

    printf("Student records who are not from Kathmandu :\n");
    char c;
    while (c = (fgetc(fptr)) != EOF) //read until end of file
    {
        fscanf(fptr, "\t%s %d %s %s %d-%d-%d\n", &temp.name, &temp.roll,
               &temp.address, &temp.faculty, &temp.dob.mm, &temp.dob.dd, &temp.dob.yy);
        if (strcmp("Kathmandu", temp.address) != 0)
        { 
            printf("Name : %s \t Roll : %d \t Address: %s \t Faculty: %s \tDateofbirth: % d - % d - % d\n ", temp.name, temp.roll, temp.address, temp.faculty, temp.dob.mm, temp.dob.dd, temp.dob.yy);
        }
    }
    fclose(fptr); //closing the file

}