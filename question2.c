#include<stdio.h>
void even_odd(int n){
    if (!(n%2)) printf("%d is a even number.\n", n);
    else printf("%d is a odd number.\n", n);
}

void main(){
    printf("Enter the number : ");
    int num;
    scanf("%d", &num);
    even_odd(num);
}