#include <stdio.h>
void printnum(int n);
int digit(int num);
int main() {
    int num;
    printf("enter 3 digit num:");
    scanf("%d" , &num);
    if(num <100 || num > 999){
        printf("invalid input!");
    }
    else{
        int third_digit = digit(num);
        int r = num /10;
        int sec_digit = digit(r);
        int first_digit = digit(r/10);
        printnum(first_digit);
        printnum(sec_digit);
        printnum(third_digit);


    }
    return 0;
}
int digit(int num){
    int digit = num % 10;
    return digit;
}
void printnum(int n){
    switch(n)
            {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                break;
            }
}