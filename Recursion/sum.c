#include<stdio.h>
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
   
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int result = sum(n);
    printf("the sum is %d" , result);
    return 0;
}
