#include<stdio.h>
void findsum(int arr[] ,int n,int x){
    for(int i = 0;i< n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                printf("pair found!(%d ,%d)\n",arr[i],arr[j]);
            }
        }
    }
}
void enterarray(int a[] , int n){
    for(int i = 0; i <n ; i++){
        printf("enter item for[%d]:",i);
        scanf("%d" ,&a[i]);
    }
}
int main(){
    int arr[100] , size , d;
    printf("enter the size of the array:");
    scanf("%d" , &size);
    if(size > 100){
        printf("the size needs to be under 100 ");
    }
    enterarray(arr,size);
    printf("enter the sum you wanna search for:");
    scanf("%d",&d);
    findsum(arr,size,d);
    return 0;
}