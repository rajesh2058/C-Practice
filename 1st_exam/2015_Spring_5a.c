#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50], address[50];
    int reg;
    char faculty[50];
    int year;
};
void main(){
     struct student s[5], temp;
     FILE *fp;
     fp = fopen("STUDNET.DAT", "ab+");
     for (int i=0; i<2; i++){
         printf("Enter name , address, regestration no, faculty , year\n");
         scanf("%s %s %d %s %d", s[i].name, s[i].address, &s[i].reg, s[i].faculty, &s[i].year);
     }
     for (int i=0; i<2; i++){
         fprintf(fp, "%s %s %d %s %d", s[i].name, s[i].address, s[i].reg, s[i].faculty, s[i].year);
     }
    
     char c;
    while ((c = (fgetc(fp))) != EOF){
        fscanf(fp, "%s %s %d %s %d", temp.name, temp.address, temp.reg, temp.faculty, temp.year);
        printf("\n\n\nThe students from batch 2016 are \n");
        if (temp.year == 2016){
            printf("Name : %s\nAddress : %s\nReg : %d\nFaculty : %s\nYear : %d\n", temp.name, temp.address, temp.reg, temp.faculty, temp.year);
        }
    }fclose(fp);
}