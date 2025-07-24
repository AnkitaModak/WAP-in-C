#include<stdio.h>
int main(){
    int size,product=1;
    printf("enter size:");
    scanf("%d" ,&size);
    int arr[size];
    for(int i = 0; i<size;i++){
        printf("enter numbers:");
        scanf("%d" , &arr[i]);
        product*=arr[i];
    }
    printf("the product of all elements in array is %d" , product);
    return 0;
}