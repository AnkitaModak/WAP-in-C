#include <stdio.h>

int main() {
    int rows , i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    for(i = 1 ; i <= 4 ; i++){
        for(j = 0; j <= 4-i; j++){
            printf("*");
        }
    printf("\n");
    }
    

    return 0;
}