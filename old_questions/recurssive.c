#include<stdio.h>
#include<math.h>

int factorial(int n){
    while (n>1){
        return n*factorial(n-1);
    }
}
double series(float x, int n){
    double result = 0;
    int loop_conditon = 1;
    for (int i=1; i<n-1; i++){
        if (i%2)
            result += pow(x, loop_conditon)/factorial(loop_conditon);
        else 
            result -= pow(x, loop_conditon)/factorial(loop_conditon);
        loop_conditon += 2;
    }return result;
}
void main(){
    float x;
    int n;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter the value of n (n must be odd) : ");
    scanf("%d", &n);
    if (!(n%2)) n--;
    printf("The result of the series is %lf", series(x, n));

}