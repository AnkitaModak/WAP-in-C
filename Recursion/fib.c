#include<stdio.h>
int fib(int n ){
    if(n==1 || n ==2)
        return 1;
    return fib(n-1) + fib(n-2);
    
}
int main() {
    int n;
    printf("enter which fibonacci number you wish to see:");
    scanf("%d" , &n);
    int ans = fib(n);
    printf("the %dth fibonacci number is %d" , n, ans);
    return 0;
}