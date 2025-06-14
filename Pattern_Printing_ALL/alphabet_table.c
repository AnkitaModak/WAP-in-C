#include <stdio.h>

int main() {
    int rows ,i ,j,n;
    char ch_1='A',ch_2;
    printf("enter row number :");
    scanf("%d" ,&rows);
    n = rows;
    for(i = 1 ; i <= rows ; i++){
        ch_2 = 'A';
        for(j = 1; j <=2*rows-1; j ++){
            if(i==1){
                printf("%c", ch_1); 
                ch_1++;}
        }
        for(j = 0; j <=rows-i; j ++){
            if(i != 1){  
                printf("%c", ch_2);
                ch_2++;}
           }
        for(j = 3; j <=(2*i-1); j++){
            if(i != 1){
                printf(" ");
                ch_2++;}
           }
        for(j = 1; j <=n; j ++){
            if(i != 1){
                printf("%c",ch_2);
                ch_2++;}}
    printf("\n");
    n--;
    }
    return 0;
}