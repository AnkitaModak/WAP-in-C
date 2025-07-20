#include<stdio.h>
int stair(int n){
    /*if(n==1) return 1;
    if(n==2) return 2;*/
    if(n==1 || n == 2 || n==3){
        return n;
    }
    int totalways= stair(n-1) + stair(n-2)+stair(n-3);
    return totalways;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
}