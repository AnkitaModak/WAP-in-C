#include <stdio.h>

int main() {
    int rows , column , i ,j , num = 0,start;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        start = (i % 2 ==1)?1:0;
        num = start;
        for(j = 1; j <= i; j ++){
            printf("%d",num);
            num = 1 - num;
        }
        printf("\n");
    }
    
    return 0;
}
