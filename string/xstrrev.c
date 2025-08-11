#include<stdio.h>
#include<string.h>
int xstrlen(char *s){
    int count = 0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
}    
void xstrrev(char str[100],char str1[100],
    int n){
    int j = 0;
    for(int i = n-1 ;i>=0;i--){
        str1[j++] = str[i];
    }
    str1[j] = '\0';
    printf("the reversed string is %s\n",str1);
}
int main(){
    char str[100],str1[100];
    puts("enter the string you wish to reverse:");
    fgets(str,100,stdin);
    int n = xstrlen(str);
    xstrrev(str,str1,n);
    return 0;
}