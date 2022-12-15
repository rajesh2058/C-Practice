#include<stdio.h>
#include<math.h>
void isPrime();
void isPrime(){
    int num, check=0;
    scanf("%d", &num);
    for (int i=2; i<=sqrt(num); i++){
        if (!(num%i)){
            check = 1;
            break;
        }
    }if (check) printf("Not prime");
    else printf("Prime");
}

void main(){
    isPrime();
}