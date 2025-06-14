#include <stdio.h>

int main() {
    int rows ,i ,j,num_1;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        num_1 = 1;
        for(j = 1; j <=rows- i; j ++){
            printf(" ");
        }
        for(j = 1; j <=(2*i-1); j ++){
            printf("%d",num_1);
            num_1++;
        
        }
        printf("\n");
    }
    return 0;
}