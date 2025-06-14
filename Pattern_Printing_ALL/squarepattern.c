#include <stdio.h>

int main() {
    int rows , column , i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    printf("enter column number :");
    scanf("%d" ,&column);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <= column; j ++){
            printf("*");
        }
    printf("\n");
    }
    

    return 0;
}