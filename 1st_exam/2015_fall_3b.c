#include<stdio.h>
// recursive function
int sum(int n){ //235
    if (n != 0){
        return n%10 + sum(n/10);
    }else return 0;
}
// normal function
int fuction(int n){
    int la, sum=0;
    while (n != 0){  // 235
        la = n % 10;
        sum = sum + la;
        n = n/10; // 23
    }
    return sum;
}

// 5+sum(23)
// 5+3+sum(2)
// 5+3+2+sum(0)
// 5+3+2+0
// 10

void main(){
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    
    printf("%d", fuction(num));

    


}