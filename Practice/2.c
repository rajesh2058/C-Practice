#include<stdio.h>
int even(int n){
    if (n%2 == 0)
        printf("%d \n", n);
    if (n==10) return 0;
    return even(n+1);
}
int odd(int n){
    if (n%2 != 0)
        printf("%d \n", n);
    if (n==10) return 0;
    return odd(n+1);
}
void prime(){
    printf("The prime numbers from 1 to 10 are \n1 \n2 \n");
    for (int i=2; i<=10; i++){
        if (i%2 == 0)
            continue;
        else{
            int check = 0;
            for (int j=2; j<i; j++){
                if (i%j == 0){
                    check++;
                    break;
                }
            }if (check == 0) printf("%d \n", i);
        }
    }
}
int printing(n){
    printf("%d \n", n);
    if (n==10) return 0;
    return printing(n+1);
}
void composite(){
    printf("The composite number from 1 to 10 are \n");
    for (int i=2; i<=10; i++){
        for (int j=2; j<i; j++){
            if (i%j == 0){
                printf("%d \n", i);
                break;
            }
        }
    }
}
void main(){
    int n = 1;
    printf("The numbers from 1 to 10 are \n");
    printing(n);
    printf("The even numbers from 1 to 10 are \n");
    even(n);
    printf("The odd numbers from 1 to 10 are \n");
    odd(n);
    prime();
    composite();
}