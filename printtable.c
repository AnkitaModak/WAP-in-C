#include <stdio.h>

int main() {
    int num,table;
    printf("till which digit you want to print the table?");
    scanf("%d" , &num);
    for(int i = 1 ;  i <= num; i++){
        printf("Table of %d: \n" ,i );
        for(int j = 1; j <= 10; j++){
            table = j * i;
            printf("%d\t" , table);
        }
        printf("\n");
    }
    return 0;
}
