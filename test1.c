#include<stdio.h>
int evenodd(int n);
int evenodd(int n){
    if(n%2==0){
        return 0;}
    else{
        return 1;
    }
}
void main (){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    int result = evenodd(n);
    if(result==0){
        printf("The number is even");
    }else{
        printf("The number is odd");
    }
}