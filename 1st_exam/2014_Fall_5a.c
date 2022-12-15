#include<stdio.h>
void main(){
    int arr[5] = {5, 1, 4, 2, 3};
    int temp = 0;
    int *pt = &temp;
    int *p1, *p2;
    for (int i=0; i<5; i++){
        p1 = &arr[i];
        for (int j=0; j<5; j++){
            p2 = &arr[j];
            if (*p1<*p2){
                *pt = *p1;
                *p1 = *p2;
                *p2 = *pt;
            }
        }
    }
    for (int i=0; i<5; i++){
        printf("%d \n", arr[i]);
    }
}