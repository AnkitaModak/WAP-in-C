#include<stdio.h>
int linear_search(int a[] , int n, int d){
    for(int i = 0; i < n ;i++){
        if(a[i] == d){
            return i;
        }
    }
    return -1;
}
void enterarray(int a[] , int n){
    for(int i = 0; i <n ; i++){
        printf("enter item for[%d]:",i);
        scanf("%d" ,&a[i]);
    }
}
int main(){
    int arr[100] , size , d,loc;
    printf("enter the size of the array:");
    scanf("%d" , &size);
    if(size > 100){
        printf("the size needs to be under 100 ");
    }
    enterarray(arr,size);
    printf("enter the number you wanna search for:");
    scanf("%d",&d);
    
    loc = linear_search(arr,size,d);
    if(loc ==-1){
        printf("the desired term couldn't be found!");
    }
    else{
        printf("yeeaahhh item found!mission successful!");
    }
    return 0;
}
