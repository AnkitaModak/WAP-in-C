#include<stdio.h>

int main(){
    char str[100];
    int num = 0;
    printf("enter the string you that you wish to convert into num:");
    scanf("%s",&str);
    for(int i = 0;str[i] != '\0';i++){
        if(str[i]>= '0' && str[i] <= '9')
            num = num *10 + (str[i]-'0');
        else{
            printf("not valid \n");
            return 1;
        }
    }
    printf("the number is %d" ,num);
    return 0;
}