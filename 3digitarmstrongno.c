#include <stdio.h>
#include <math.h>
int main() {
    int digit , sum, temp ;
    for(int i = 100; i <= 999; i++){
        sum = 0;
        temp = i;
        while(temp != 0){
            digit = temp % 10;
            sum += (round)(pow(digit , 3));
            temp = temp / 10;
        }
        if(i == sum){
            printf("%d \n" , i);
        }

    }
    return 0;

}
