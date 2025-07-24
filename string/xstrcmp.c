#include<stdio.h>

int xstrcmp(char *t,char *s){
    while(*t && *s){

        if(*t != *s){
            return *t-*s;
        }
        t++;
        s++;}
    return *t-*s;

}


int main(){
    char source[] ="ankita";
    char target[50] = "Ankita";
    printf("you had %d\n",xstrcmp(source,target));
    return 0;
}