#include<stdio.h>
int maze(int n,int m){
    int rightways=0,downways=0;
    if(n==1 &&m==1 )
        return 1;
    if(n==1){
        rightways +=maze(n,m-1);
    }
    if(m==1){
        downways +=maze(n-1,m);
    }
    if(n > 1 && m > 1 ){
        rightways +=maze(n,m-1);
        downways +=maze(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d" , &row);
    printf("Enter number of columns: ");
    scanf("%d" , &col);
    int no_of_ways = maze(row,col);
    printf("%d",no_of_ways);
    return 0;
}