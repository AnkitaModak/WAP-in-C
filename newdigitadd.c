#include <stdio.h>

int main(){
    int num,n1,n2,n3,n4,n5,r;
    int new_num =0;
    int unit = 1;
    printf("Enter a number:");
    scanf("%d",&num);
    if(9999 > num || 100000 < num){
        printf("this is not a 5 digit number");
    }
    r = (num % 10 +1) %10;
    new_num = new_num +unit * r;
    num = num /10;
    unit =unit * 10;
    
    r = (num % 10 +1) %10;
    new_num = new_num +unit * r;
    num = num /10;
    unit =unit * 10;
    
    r = (num % 10 +1) %10;
    new_num = new_num +unit * r;
    num = num /10;
    unit =unit * 10;
    
    r = (num % 10 +1) %10;
    new_num = new_num +unit * r;
    num = num /10;
    unit =unit * 10;
    
    r = (num % 10 +1) %10;
    new_num = new_num +unit * r;
    num = num /10;
    unit =unit * 10;
    
    
    printf("the new number is %d",new_num);
    
    
    
    
    return 0;
}