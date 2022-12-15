#include<stdio.h>
void main(){
    printf("Enter matrix of 2*2 \n");
    int largest = -9999;
    int matrix [2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            scanf("%d", &matrix[i][j]);
            if (largest<matrix[i][j])
                largest = matrix[i][j]; 
        }
    }
    if (largest <= -9999)
        printf("Error");
    printf("The largest element among the matrix is %d \n", largest);
}