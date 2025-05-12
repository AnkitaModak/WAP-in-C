#include <stdio.h>

int main() {
    int num,digitnum =0,r;
    printf("Enter a number: ");
    scanf("%d" , &num);
    while(num != 0){
        num = num /10;
        digitnum++;
    }
    printf("the number has %d number of digits",digitnum);
    return 0;
}