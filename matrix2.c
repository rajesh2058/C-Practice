#include<stdio.h>
void main(){
	int mat1[2][2];int i,j;
    int sum[2][2];
    printf("Enter the value of matrix 1 :\n");
	for(i=0;i<2;i++){ //row 
	    for(j=0;j<2;j++){ // coulmn
	        scanf("%d",&mat1[i][j]);
        }
    }
	int mat2[2][2];
    printf("Enter the mat2:\n");
    for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
            scanf("%d",&mat2[i][j]);}}
	for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j] = mat1[i][j]+mat2[i][j];
    	}	
    }
    printf("The resultant matrix is : \n");
    for(i=0;i<2;i++){ //row
        printf("\n");
        for(j=0;j<2;j++){  // column
            printf("%4d", sum[i][j]);
        }
    }
}