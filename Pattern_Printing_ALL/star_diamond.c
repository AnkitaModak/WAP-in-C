#include <stdio.h>
int main() {
    int rows ,i ,j;
    printf("enter row number :");
    scanf("%d" ,&rows);
    int nsp = rows/2;
    int nst = 1;
    int ml = rows/2+1;
    for(i = 1 ; i <= rows ; i++){
        for(j = 1; j <=nsp; j ++){
            printf(" ");
        }
        for(j = 1; j <=nst; j ++){
            printf("*");
            
        }
        
        if(i < ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}