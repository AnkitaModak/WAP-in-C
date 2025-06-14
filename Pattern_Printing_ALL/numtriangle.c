#include <stdio.h>

int main() {
    int rows , num =1 , i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <=i; j ++){
            printf("%d " , num);
            num++;
        }
    printf("\n");
    num=1;
    }
    

    return 0;
}