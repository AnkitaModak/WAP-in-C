#include <stdio.h>

int main() {
    int rows , column , i ,j,n;
    printf("enter row number :");
    scanf("%d" ,&rows);
    n =rows;
    for(i = 1 ; i <= rows ; i++){
        
        for(j = 1; j <i; j ++){
            if(i != 1){
            printf(" ");}
        }
        
        for(j = 1; j <=n; j ++){
            printf("*");
           }
        
    printf("\n");
    n--;
    }
    return 0;
}