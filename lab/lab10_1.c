#include<stdio.h>
void main(){
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    if (*p1 > *p2){
        if (*p1 > *p3){
            printf("%d is largest", *p1);
        }else {
            printf("%d is largest", *p3);
        }
    }else {
        if (*p2 > *p3){
            printf("%d is largest", *p2);
        }else {
            printf("%d is largest", *p3);
        }
    }


}