#include<stdio.h>
void n_to_1(int n){
    if(n==1){
        printf("%d\n",n);
        return;
    }
    printf("%d\n",n);
    n_to_1(n-1);
    return;
}
void one_to_n(int x , int n){

    if(x > n){
        return;
    }
    printf("%d\n",x);
    one_to_n(x+1,n);
    return;
}
int main() {
    int n;
    printf("enter n :");
    scanf("%d", &n);
    printf("enter n to 1 :\n");
    n_to_1(n);
    printf("enter 1 to n :\n");
    one_to_n(1,n);
    return 0;
}