#include<stdio.h>
void main(){
    char str[6] = "COSMOS"; 
    for (int i=0; i<5; i+=2){
        for (int j=0; j<i+2; j++){
            printf("%c", str[j]);
        }printf("\n");
    }
    for (int i=5; i>0; i-=2){
        for (int j=0; j<i-1;j++){
            printf("%c", str[j]);
        }printf("\n");
    }
}