#include<stdio.h>
void xstrcpy(char *t,char *s){
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
    xstrcpy(target,source);
    printf("string = %s",source);
    return 0;
}