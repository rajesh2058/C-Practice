#include<stdio.h>
#include<math.h>
struct coordinate{
    float x1, y1, x2, y2;
};


void main(){
    struct coordinate c;
    printf("Enter x1,y1 \n");
    scanf("%f%f", &c.x1, &c.y1);
    printf("Enter x2,y2 \n");
    scanf("%f%f", &c.x2, &c.y2);
    float d = sqrt(pow(c.x2-c.x1, 2) + pow(c.y2-c.y1, 2));
    printf("The distance between given coordinate is %f", d);
}