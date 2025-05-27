#include <stdio.h>

int main(){
    int n,i,j,k;
    
    printf("enter n:");
    scanf("%d",&n);
    for( i = 1; i <=n ; i++){
        int num =1;
        int cnt =1;
        for(j =1 ; j <=n-i; j++){
             printf(" ");}
        for(j =1 ; j <= i; j++){
            printf("%d", num);
            num++;
        }    
        for( k = j-2 ; k>=1  ; k--){
             printf("%d", k);}
        
        printf("\n");}
    return 0;
}