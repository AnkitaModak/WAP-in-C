#include <stdio.h>

int main() {
    int rows, i ,j,n;
    printf("enter row number :");
    scanf("%d" ,&rows);
    n = rows;
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <=2*rows-1; j ++){
            if(i==1){
            printf("*");}
        }
        for(j = 0; j <=rows-i; j ++){
            if(i != 1){  
                printf("*");}
           }
        for(j = 4; j <=(2*i-1); j++){
            if(i != 1){
                printf(" ");}
           }
        for(j = 1; j <=n; j ++){
            if(i != 1){
                printf("*");}}
    printf("\n");
    n--;
    }
    return 0;
}