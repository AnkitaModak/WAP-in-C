#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0,downways=0;
    if(cr == er && cc==ec){
        return 1;
    }
    if(cr == er){
        
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc == ec){
        downways = maze(cr+1,cc,er,ec);
    }
    if( cr < er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways = maze(cr+1,cc,er,ec);
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
    int no_of_ways = maze(1,1,row,col);
    printf("%d",no_of_ways);
    return 0;
}