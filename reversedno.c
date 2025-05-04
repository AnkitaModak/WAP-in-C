#include <stdio.h>
void reverse(int num);
int main() {
    int num;
    printf("enter your desired no :");
    scanf("%d" , &num);
    reverse(num);
    return 0;
}
void reverse(int num){
    int new_num = 0;
    while(num != 0 ){
    int r = num % 10;
    new_num = new_num* 10 + r;
    num/=10;
    }
    printf("the reversed no. is %d" , new_num);
}