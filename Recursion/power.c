#include<stdio.h>
int power(int a, int b){
    if(b == 0 )
        return 1;
    int mypow = a *power(a, b-1);
    return mypow;
}
int main(){
    int a , b;
    printf("enter base:");
    scanf("%d" , &a);
    printf("enter power:");
    scanf("%d" , &b);
    int ans = power(a, b);
    printf("the ans is %d" , ans);
    return 0;
}