#include <stdio.h>

int main() {
    int term, fib, n1 =0, n2 = 1 ;
    printf("which fibonacci no. you want to see? :");
    scanf("%d" , &term);
    if(term == 1){
        fib = n1;
    }
    if(term == 2){
        fib = n2;
    }
    for( int i = 3; i <= term; i++){
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }
    printf("the %dth fibonacci no. is %d" , term ,fib);

    return 0;
}