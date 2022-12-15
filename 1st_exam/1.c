#include<stdio.h>
void main(){
    int x=10, y=20, z=5, i;
    i = x*(++y+z++)%3+y/x *2-5;
    x+=z;
    x--;
    z+=10;
    z--;
    printf("x=%d\ny=%d\nz=%d",x,y,z);
    printf("\ni=%d",i);
}