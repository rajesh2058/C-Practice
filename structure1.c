#include<stdio.h>
struct customer {
    int a;
    int b;
};
int main(){
    struct customer c1;
    scanf("%d%d",&c1.a, &c1.b);
    printf("%d\n%d", c1.a, c1.b);
    return 0;
}