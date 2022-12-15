#include<stdio.h>, <string.h>

void main(){
    char name[60];
    int n;
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Which index do you want to uppercase ?\n");
    scanf("%d", &n);

    char temp[1];
    temp[0] = name[n];
    strupr(temp);

    name[n]=temp[0];
    printf("%s", name);

}