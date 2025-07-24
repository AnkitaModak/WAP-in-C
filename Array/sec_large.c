#include<stdio.h>
int seclarge(int a[] ,int n){
    int max=0,sec_max=0;
    for(int i = 0; i<n ; i++){
        if(a[i] >max){
            max = a[i];
        }
    }
    for(int i = 0; i<n ; i++){
        if(a[i]==max){
            continue;
        }
        else{
            if(a[i]>sec_max){
                sec_max = a[i];
            }
        }
    }
    return sec_max;
    
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
    printf("the second largest element is %d" ,seclarge(arr,size));
    return 0;
}