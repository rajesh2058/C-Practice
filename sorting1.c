#include<stdio.h>
void main(){
int num[5];
int i;
int j;
int temp;
printf("Enter the value of num %d :\n",i+1);
for(i=0;i<5;i++){
    scanf("%d",&num[i]);
}
for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(num[j]>num[i]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
    }
}printf("The output is : \n");
for(i=0;i<5;i++)
    printf("%d\n",num[i]);
}