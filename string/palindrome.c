#include<stdio.h>
#include<string.h>

int main() {
    char s1[30],s2[30];
    printf("enter a string:");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if(stricmp(s1,s2)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}
