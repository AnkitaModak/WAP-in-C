#include <stdio.h>
#include <math.h>
int factorial( int n );
int main() {
    int num , sum = 0  , digit , originalnum, temp , fact = 1;
    printf("Enter number :");
    scanf("%d", &num);
    temp = num;
    originalnum = num;
    while (temp != 0 )
    {
        digit = temp % 10;
        sum += (round)(factorial(digit));
        temp = temp/10;
    }
    if(sum == originalnum){
        printf("this is a strong number");
    }
    else{
        printf("this is not a strong number");
    }

    return 0;
}

int factorial(int n)
{   int fact = 1;
    if(n == 0 || n == 1){
       fact = 1;
    }
    
    else{
        for(int i = 2; i <= n; i++){
            fact = round(fact *i);
        }
    }
    return fact;
}
