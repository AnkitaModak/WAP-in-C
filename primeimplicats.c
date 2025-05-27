#include <stdio.h>
int main() {
    int num,cnt;
    int i =2;
    printf("enter num:");
    scanf("%d" , &num);
    for(int i = 2; num > 1 ; i++){
        cnt = 0;
        while (num % i == 0) {
            num /= i;
            cnt++;
               if(cnt < 2){
                   printf("%d ", i);}
            }
            
        }
    return 0;

}