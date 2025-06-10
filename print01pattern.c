#include <stdio.h>

int main() {
    int i , j ;
    for(i = 1 ; i <= 3 ; i++){
    for(j =3 ; j>=i ; j--){
            printf(" ");
    }
        for(j = 0 ; j < (2*i -1 ); j ++){
            printf("%d" , j %2);
        }
        printf("\n");
}
    return 0;
}