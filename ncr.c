#include <stdio.h>
int factorial(int x){
    int fact = 1 ;
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

int main() {
    int n;
    printf("enter n:");
    scanf("%d" , &n);
    int r;
    printf("enter r:");
    scanf("%d" , &r);
    
    printf("the combination is %d", ncr(n , r));
    return 0;
}