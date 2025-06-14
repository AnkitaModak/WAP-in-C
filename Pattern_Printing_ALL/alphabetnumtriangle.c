#include <stdio.h>

int main() {
    int rows ,column,i ,j,num=1;
    char ab = 'A';
    printf("enter row number :");
    scanf("%d" ,&rows);
    for(i = 1 ; i <= rows ; i++){
        if(i % 2 != 0){
            for(j = 1; j <=i; j ++){
            printf("%d ", num);
            num++;
            }}
            if(i % 2 == 0){
            for(j = 1; j <=i; j ++){
            printf("%c " , ab);
            ab++;}
            }
    printf("\n");
    ab = 'A';
    num =1;
    }
    return 0;
}