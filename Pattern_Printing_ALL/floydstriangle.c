#include <stdio.h>

int main() {
    int rows , column , i ,j , num = 1;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <= i; j ++){
            printf("%d " , num);
            num++;
        }
    printf("\n");
    }
    

    return 0;
}