#include <stdio.h>

int main() {
    int rows , column , i ,j, ch = 'A';
    printf("enter row number :");
    scanf("%d" ,&rows);
    printf("enter column number :");
    scanf("%d" ,&column);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <= rows -i; j++){
            printf(" ");                         
        }
        for(j = 1; j <= i; j++){
            printf("%c" , ch);    
            ch++;                     
        }
    printf("\n");
    ch='A';
    }
    

    return 0;
}