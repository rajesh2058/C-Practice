#include<stdio.h>

int sum(int a, int b){
    return a+b;
}int difference(int a, int b){
    if (a>b) return a-b;
    else return b-a;
}
void main(){
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is %d\n", num1, num2, sum(num1, num2));
    printf("The difference of %d and %d is %d\n", num1, num2, difference(num1, num2));
}