#include<stdio.h>
void main(){
    int n=4;
    for (int i=0; i<n; i++){
        for (int k=1; k<=i; k++){
            printf("  "); // space printing
        }
        for (int j=1; j<n-i+1; j++){
            printf("x ");   // x printing
        }
        printf("\n");   
    }
}