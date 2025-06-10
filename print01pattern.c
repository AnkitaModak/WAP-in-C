#include <stdio.h>

int main() {
    int i , j,num,start ;
    for(i = 1 ; i <= 3 ; i++){
        for(j =3 ; j>i ; j--){
            printf(" ");
    }   
        start = (i %2 ==1)?0:1;
        num = start;
        for(j = 1 ; j <= (2*i -1 ); j ++){
            printf("%d" ,  num);
            num = 1 - num;
        }
        printf("\n");
}
    return 0;
}
