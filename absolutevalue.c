#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d" , &num);
    if(num < 0){
        num = num * -1;
    }
    printf("Absolute value = %d" ,num);
    return 0;
}