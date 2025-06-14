#include <stdio.h>

int main() {
    int rows , column , i ,j,num = 1;
    printf("enter row number :");
    scanf("%d" ,&rows);
    printf("enter column number :");
    scanf("%d" ,&column);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <= column; j ++){
            printf("%d ", num);
            num++;
        }
    printf("\n");
    num= 1;
    }
    

    return 0;
}