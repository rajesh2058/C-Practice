#include<stdio.h>
void main(){
    int a=5, b=10, temp;
    int *p1 = &a;
    int *p2 = &b;
    int *pt = &temp;
    *pt = *p1;
    *p1 = *p2;
    *p2 = *pt;
    printf("a = %d \nb = %d \n", *p1, *p2);
}