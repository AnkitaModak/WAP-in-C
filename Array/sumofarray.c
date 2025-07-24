#include<stdio.h>
int main(){
    int size,sum=0;
    
    printf("enter size:");
    scanf("%d" ,&size);
    int arr[size];
    for(int i = 0; i<size;i++){
        printf("enter numbers:");
        scanf("%d" , &arr[i]);
        sum+=arr[i];
    }
    printf("the sum of all elements in array is %d" , sum);
    return 0;
}