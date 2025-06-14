#include <stdio.h>

int main() {
    int rows , num , i ,j,num_2;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        num=1;
        for(j = 1; j <=rows- i; j ++){
            printf(" ");
        }
        for(j = 1; j <=i; j ++){
            printf("%d",num);
            num++;
        }
        num_2 = num-1;
        for(j = 1; j <= i-1; j ++){
            num_2--;
            printf("%d",num_2);
            }
        
    printf("\n");
    }
    

    return 0;
}