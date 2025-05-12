#include <stdio.h>

int main() {
    int num , count=0 ,sum =0;
    float avg;
    
    do{
        printf("enter number");
        scanf("%d" , &num);
        sum = sum + num;
        count++;
    }while(num != 0);
    avg =(float)sum/--count;
    printf("the average is %f", avg);
    return 0;
}