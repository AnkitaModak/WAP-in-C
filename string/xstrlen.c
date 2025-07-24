#include<stdio.h>

int xstrlen(char *s){
    int count = 0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
    
}


int main(){
    char source[] ="ankita";
    printf("you had %d\n",xstrlen(source));
    return 0;
}