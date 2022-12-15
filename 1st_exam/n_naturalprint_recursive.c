// Printing 1 to n using recursive fuction

#include<stdio.h>
void print(int n, int t){ // n = 1, t=50
    printf("%d \n", n);
    if (n != t){  
        print(n+1, t);
    } 
}void main(){
    int n;
    scanf("%d", &n);
    int temp = n;
    n=1;
    print(n, temp);
}


// 27+result(15)
// 27+125+result(1)
// 27+125+1+result(0)
// 27+125+1+0
// 153