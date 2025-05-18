#include <stdio.h>

int main() {
    int num , fact = 1;
    do{
        printf("Enter the digit you wish to calculate the factorial of : ");
        scanf("%d" , &num);

    }while(num <0);
    if(num == 0 || num == 1){
        printf("factorial is 1");
    }
    else if(num < 0){
        printf("invalid input!");
    }
    else{
        for(int i = 2; i <= num; i++){
            fact = fact *i;
        }
    }
    printf("the factorial is %d" , fact);
    return 0;
}
