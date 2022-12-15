#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    int check = 0;
    for (int i=2; i<n; i++){
        if (n%i == 0){
            check++;
            break;
        }
    }if (check==0){
        printf("Prime");
    }else {
        printf("Not Prime");
    }
}