// Program to find the sum of matrix Question 2020 Fall 4b
#include<stdio.h>
int matrix_sum(){
    int m,n,sum=0;
    printf("Enter m and n : ");
    scanf("%d%d", &m, &n);
    int matrix[m][n];

    printf("Enter matrix \n");
    for (int i=0; i<m; i++){ // row
        for (int j=0; j<n; j++){ // column
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    return sum;
}void main(){
    int result = matrix_sum();
    printf("The sum is %d", result);
}