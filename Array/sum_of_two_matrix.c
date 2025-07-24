#include <stdio.h>
void inputmatrices(int A[10][10],int row,int col){
    int i,j;
    for(i=0;i <row; i++){
        for(j =0 ;j< col;j++){
            printf("enter value for [%d, %d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
void addmatrices(int A[10][10],int B[10][10],int C[10][10],int row,int col){
    int i,j;
    for(i=0;i <row; i++){
        for(j =0 ;j< col;j++){
            C[i][j] = A[i][j] +B[i][j];}
    }}  
void printmatrix(int C[10][10],int row,int col){
    int i,j;
    for(i=0;i <row; i++){
        for(j =0 ;j< col;j++){
            printf("|%d|",C[i][j]);}
            
            printf("\n");}
}            
int main() {
    int A[10][10],B[10][10],C[10][10];
    int row,col,i,j;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter col:");
    scanf("%d",&col);
    printf("enter value for A:\n");
    inputmatrices(A,row,col);
    printf("enter value for B:\n");
    inputmatrices(B,row,col);
    printf("A matrix:\n");
    printmatrix(A,row,col);
    printf("B matrix:\n");
    printmatrix(B,row,col);
    addmatrices(A,B,C,row,col);
    printf("sum of two matrix:\n");
    printmatrix(C,row,col);
    return 0;
}