#include<stdio.h>
void main(){
    int matrix1[2][2], matrix2[2][2];
    printf("Enter matrix 1 : \n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            scanf("%d", &matrix1[i][j]); 
        }
    }
}