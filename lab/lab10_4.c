#include<stdio.h>
#include<string.h>
void main(){
    char s1[50] = "COSMOS";
    char s2[50];
    //using string handling function
    strcpy(s2, s1);
    printf("Copied using string handling funtion as %s \n", s2);

    //without using string handling function
    for (int i=0; i<50; i++){
        s2[i] = s1[i];
    }
    printf("Copied without string handling function as %s \n", s2);
}