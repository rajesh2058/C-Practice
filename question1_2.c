#include<stdio.h>

void sum(int n1, int n2);
void sum(int n1, int n2){
    int sum = n1+n2;
    printf("The sum of %d and %d is %d.\n", n1, n2, sum);
}
void main(){
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    sum(num1, num2);
}