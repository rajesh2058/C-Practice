#include<stdio.h>
struct pub_date{
    int dd, mm, yy;
};
struct book{
    char name[50];
    float price;
    char author[50];
    struct pub_date d;
};
void main(){
    struct book b[10];

    for (int i=0; i<10; i++){
        printf("Enter %d book detail\nName, price, author and publication date\n", i+1);
        scanf("%s%f%s%d%d%d", b[i].name, &b[i].price, b[i].author, &b[i].d.dd, &b[i].d.mm, &b[i].d.yy);
    }
    printf("\nThe book having price greater than 250 are \n");
    for (int i=0; i<10; i++){
        if (b[i].price>=250){
            printf("Book Name : %s \nPrice : %f \nAuthor : %s \nPublication date : %d/%d/%d", b[i].name, b[i].price, b[i].author, b[i].d.dd, b[i].d.mm, b[i].d.yy);

        }
    }
}