#include <stdio.h>

int main(){
    int a,b,gcd,lcm,mul,r;
    printf("enter no.=");
    scanf("%d %d" , &a ,&b);
    mul = a * b ;
    r = a % b;
    do{
        a = b;
        b = r;
        r = a %b;
    }while(r !=0);
    gcd = b;
    lcm = mul  / gcd;
    printf("GCD = %d \n, lcm  = %d \n", gcd,lcm);
    return 0;
}