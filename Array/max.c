#include<stdio.h>
int main(){
    int size,max=0;
    printf("enter size:");
    scanf("%d" ,&size);
    int arr[size];
    for(int i = 0; i<size;i++){
        printf("enter numbers:");
        scanf("%d" , &arr[i]);
        if(arr[i]>max) max = arr[i];
    }
    printf("the product of all elements in array is %d" , max);
    return 0;
}