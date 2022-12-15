#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *p;
    p = fopen("student.txt","r");
    char c;
    if (p==NULL){
        printf("No such file");
        exit(1);
    }else {
        while (!feof(p)){
            fscanf(p, "%c", &c);
            printf("%c",c);
        }
    }fclose(p);
}