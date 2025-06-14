#include <stdio.h>

int main() {
    int rows ,i ,j,n,num=1,num_1;
    printf("enter row number :");
    scanf("%d" ,&rows);
    n = rows;
    for(i = 1 ; i <= rows ; i++){
        num_1 = 1;
        for(j = 1; j <=2*rows-1; j ++){
            if(i==1){
            printf("%d", num);
            num++;}
        }
        for(j = 0; j <=rows-i; j ++){
            if(i != 1){  
                printf("%d", num_1);
                num_1++;}
           }
        for(j = 3; j <=(2*i-1); j++){
            if(i != 1){
                printf(" ");
                num_1++;}
           }
        for(j = 1; j <=n; j ++){
            if(i != 1){
                printf("%d",num_1);
                num_1++;}}
    printf("\n");
    n--;
    }
    return 0;
}