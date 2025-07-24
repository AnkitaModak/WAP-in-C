#include<stdio.h>
int main() {
    int marks[10],min =0;;
    for(int i = 0;i<10;i++){
        printf("Enter Mark:");
        scanf("%d" , &marks[i]);
    }
    printf("So the lowest(<35) marks are:\n[ ");

    for(int i = 0;i<10;i++){
       if(marks[i] < 35) {
        if(marks[i]< min) 
            min =marks[i];
            printf("%d, ",min);
        
       }
    }
    printf("]");
    
    return 0;
}