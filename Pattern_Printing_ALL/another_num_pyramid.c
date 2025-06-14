#include <stdio.h>

int main() {
    int rows , num , i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        num =1;
        for(j = 1; j <=rows- i; j ++){
            printf(" ");
        }
        for(j = 1; j <=i; j ++){
            printf("%d",num);
            num++;
        }
        for(j = 1; j <= i; j ++){
            if(j==1){
                continue;
            }
            else{
            printf("%d",num);
            num++;}
        }
    printf("\n");
    }
    

    return 0;
}