#include<stdio.h>
int cubes(int n){
    return n*n*n + cubes(n-1);
}

void main(){
    printf("Enter Number : ");
    int num, result;
    scanf("%d", &num);
    result = cubes(num);
    printf("Cubes of the number is %d", result);
}