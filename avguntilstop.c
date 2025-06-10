#include <stdio.h>
int main() {
    int sum=0,cnt = 0,stop,num,avg;
    printf("Enter the stop value:");
    scanf("%d" , &stop);
    while(1){
        printf("enter num:");
        scanf("%d" ,&num);
        sum +=  num;
        cnt++;
        if(num == stop){
            break;
        }
    }
    avg = sum / cnt ;
    printf("the average is %d", avg);
    return 0;
}