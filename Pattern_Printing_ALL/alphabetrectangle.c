#include <stdio.h>

int main() {
    int rows ,column,i ,j;
    char ab = 'A';
    printf("enter row number :");
    scanf("%d" ,&rows);
    printf("enter column number :");
    scanf("%d" ,&column);
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <=column; j ++){
            printf("%c " , ab);
            ab++;
        }
    printf("\n");
    ab = 'A';
    }
    

    return 0;
}