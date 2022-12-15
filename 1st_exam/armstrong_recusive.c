// Program for Armstrong number using recursive and normal method

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    printf("%d", sum(n));

}


int sum(n){
    if (n !=0 ){
        return n+sum(n-1);
    }else return 0;
}