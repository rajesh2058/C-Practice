#include<stdio.h>
void main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int sum=0;
    for (int i=0; i<5; i++){
        int *p = &arr[i];
        sum += *p;
    }printf("The sum of the elements in array is %d", sum);
}