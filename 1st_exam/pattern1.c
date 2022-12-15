#include<stdio.h>
void main(){
    char arr[15] = "PROGRAMMING";

    for (int i=11; i>0; i--){
        for (int j=0; j<i; j++){
            printf("%c", arr[j]);
        }printf("\n");
    }


}