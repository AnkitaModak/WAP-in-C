#include <stdio.h>

int main() {
    int rows ,column,i ,j;
    char ab = 'A';
    printf("enter row number :");
    scanf("%d" ,&rows);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <=i; j ++){
            printf("%c " , ab);
            ab++;}
            
    printf("\n");
    ab = 'A';
    }
    return 0;
}