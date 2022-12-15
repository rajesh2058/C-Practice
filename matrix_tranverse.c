#include<stdio.h>
void main(){
    int matrix[4][3], rev_matrix[3][4];
    printf("Enter matrix of 4*3 : \n");
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
          
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; i<4; j++){
              printf("%d", matrix[i][j]);
        }
    }
    
    
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            rev_matrix[i][j] = matrix[j][i];
        }
    }
}