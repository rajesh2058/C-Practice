#include<stdio.h>
void main(){
    int a=0, b=1, n, c;
    printf("How many do you wanna print fibonacci series ?\n");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (int i=0; i<n-2; i++){
        c = a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}