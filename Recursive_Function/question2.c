#include<stdio.h>
int sum(int n){
    if (n>1)
        return n*n+sum(n-1);
    else 
        return 1;
}

void main(){
    printf("Enter num : ");
    int num;
    scanf("%d", &num);
    printf("Square of the these number is %d", sum(num));


}