#include<stdio.h>
int a=100, b=200;
int funct1(intc); //   sum = sum + a              sum += a
void main(){
    int count, c;
    for (count=1; count <= 10; ++count){
        c = 4*count;
        printf("%d", funct1(c));
    }
}// output == 92, 88, 84, 80, 76, 72, 68
int fucnt1(int x){
    int c;
    if (x<30){
        c = a-x;
    }else {
        c = b+x;
    }
    // c = (x < 30) ? (a-x) : (b+x);
    return (c);

    
}