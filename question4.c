#include<stdio.h>
void main(){
    int m[3][3], n[3][3], mul[3][3] = {(0,0,0),(0,0,0),(0,0,0)};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &n[i][j]);
        }
    }int sum;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                mul[i][j] += m[j][k];
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%6d", mul[i][j]);
        }printf("\n");
    }

}