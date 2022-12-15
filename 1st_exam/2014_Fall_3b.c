#include<stdio.h>
void main(){
    int n, largest, smallest;
    printf("How many numbers do you wanna enter ?\n");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter %d number : ", i+1);
        scanf("%d", &arr[i]);
    }largest = arr[0];
    for (int i=0; i<n; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }printf("The largest among these numbers is %d\n", largest);
    smallest = arr[0];
    for (int i=0; i<n; i++){
        if (smallest > arr[i]){
            smallest = arr[i];
        }
    }printf("The smallest among these numbers is %d\n", smallest);

}