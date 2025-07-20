#include<stdio.h>
int logpow(int a ,int b){
    int recans;
    if(b==0) return 1;
    int x = logpow(a,b/2);
    if(b % 2 == 0)
        recans = x*x;
    if(b %2 != 0)
        recans =x*x*a;
    return recans;
}
int main() {
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    int p = logpow(a,b);
    printf("the ans is %d", p);
    return 0;
}