#include <stdio.h>
#include <math.h>
int main() {
    int num, count =0 ,sum= 0, digit, temp, originalnum;
    printf("Enter NO. :");
    scanf("%d" ,&num);
    temp = num;
    originalnum = num;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    while(num != 0){
        digit = num % 10;
        sum += (round)(pow(digit,count));
        num = num / 10;
    }

    if(sum == originalnum ){
        printf("The number is an armstrong number.");
    }
    else{
        printf("The number is not an armstrong number .");
    }
    
    return 0;   
}