#include <stdio.h>

int main() {
    int rows ,i ,j;
    char ch;
    printf("enter row number :");
    scanf("%d" ,&rows);
    
    for(i = 1 ; i <= rows ; i++){
        ch = 'A';
        for(j = 1; j <=rows- i; j ++){
            printf(" ");
        }
        for(j = 1; j <=(2*i-1); j ++){
            printf("%c",ch);
            ch++;
        
        }
        printf("\n");
    }
    return 0;
}