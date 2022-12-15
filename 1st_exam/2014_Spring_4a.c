// recursive function to print 15 fibonacci series 2014 Spring 4b
#include<stdio.h>
void rec(int a, int b, int n){
    printf("%d ", b);
    while (n != 2){
        return rec(b, a+b, n-1);
    }
}
void main(){
    int a=0, b=1, n=15;
    printf("%d ", a);
    rec(a, b, n);


}