#include <stdio.h>

int main() {
    int rows , column , i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <= rows-i; j ++){
            printf(" ");
        }
        for(j = 1; j <=i; j ++){
            printf("*");
        }
        for(j = 1; j <= rows-i; j ++){
            printf("*");
        }
    printf("\n");
    }
    

    return 0;
}