#include<stdio.h>
#include<string.h>
void main(){
    int n, r;
    // printf("How many students do you want to enter ?\n");
    // scanf("%d", &n);
    char student[4][50] = {"Ujjwal", "Manish", "Ruben", "Prashant"};
    char temp[50];
    // for (int i=0; i<n; i++){
    //     printf("Enter name of %d student : ", i+1);
    //     scanf("%s", student[i]);
    // }
    int p=4;
    for (int i=0; i<4; i++){
        for (int j=0; j<p; j++){
            r = strcmp(student[i], student[j]);
            if (r>0){
                strcpy(temp, student[i]);
                strcpy(student[i], student[j]);
                strcpy(student[j], temp);
            }p--;
        }
    }
    for (int i=0; i<4; i++){
        printf("%s \n", student[i]);
    }
}