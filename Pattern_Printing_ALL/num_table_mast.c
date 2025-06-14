#include <stdio.h>

int main() {
    int rows ,i ,j,n,num=1,num_1,num_2=rows-1;
    printf("enter row number :");
    scanf("%d" ,&rows);
    n = rows;
    for(i = 1 ; i <= rows ; i++){
        num_1 = 1;
        for(j = 1; j <=2*rows-1; j ++){
            if(i==1){
                printf("%d", num);
                if(j>= rows){
                    num--;}
                else{
                num++;}}
        }
        for(j = 0; j <=rows-i; j ++){
            if(i != 1){  
                printf("%d", num_1);
                num_1++;}
           }
        for(j = 3; j <=(2*i-1); j++){
            if(i != 1){
                printf(" ");}
           }
        for(j = 1; j <=n; j ++){
            if(i != 1){
                printf("%d",num_2);
                num_2--;}}
    printf("\n");
    n--;
    num_2 =n;
    }
    return 0;
}