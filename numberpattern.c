#include <stdio.h>

int main(){
    int n;
    int num =1;
    printf("enter n:");
    scanf("%d",&n);
    for(int i = 1; i <=n ; i++){
        for(int j =1 ; j <=n- i ; j++){
            printf(" ");}
        for(int j =1 ; j <= 2*i-1 ; j++){
            printf("%d", num);
            num++;
        }
        
        printf("\n");}
    return 0;
}