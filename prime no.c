#include <stdio.h>
#include <math.h>
int main(){
    int n,p =1;
    printf("enter no.");
    scanf("%d", &n);
    if(n==0|| n==1){
        printf("this digit is not a prime no.");}
    else{
        for(int i = 2;i <= sqrt(n);i++){
             if(n%i ==0){
                 p =0;
                 break;}}
        if (p==0){printf("this digit is not a prime no");}
        else if(p==1){printf("this digit is a prime no.");}}    
    return 0;
}
