#include <stdio.h>
int factorial(int x){
    int fact = 1 ;
    if(x == 0){
        fact =1;
    }
    for(int i = 2; i <= x ; i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n , int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int ncr = nfact / (rfact *nrfact);
    return ncr;
}
void pascal(int n ){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j<n-i;j++){
            printf(" ");
        }
        for(int j = 0; j <=i;j++ ){
            printf("%d ", ncr(i , j));
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("enter n:");
    scanf("%d" , &n);
    pascal(n);
    return 0;
}