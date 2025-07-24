#include<stdio.h>
void xstrcat(char *t,char *s){
    while (*t != '\0') {
        t++;  // Move to end of target
    }

    while (*s != '\0') {
        *t = *s;  // Copy each character from source to target
        t++;
        s++;
    }
    *t = '\0';  // Null-terminate the result

}
int main(){
    char source[] ="modak";
    char target[50] = "ankita";
    xstrcat(target,source);
    printf("string = %s",target);
    return 0;
}