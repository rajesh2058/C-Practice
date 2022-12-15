// recursive function to print 10 fibonacci series 2016 Fall 4a
#include<stdio.h>
void rec(int a, int b, int n){
    printf("%d ", b);
    while (n != 2){
        return rec(b, a+b, n-1);
    }
}
void main(){
    int a=2, b=3, n=10;
    printf("%d ", a);
    rec(a, b, n);


}