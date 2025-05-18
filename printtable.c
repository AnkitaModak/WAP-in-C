#include <stdio.h>

int main() {
    int num,table;
    printf("till which digit you want to print the table?");
    scanf("%d" , &num);
    for(int i = 1 ;  i <= 10; i++){
        for(int j = 1; j <= num; j++){
            table = j * i;
            printf("%d " , table);
        }
        printf("\n");
    }
    return 0;
}