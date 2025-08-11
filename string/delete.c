#include<stdio.h>
#include<string.h>
void delete(char str1[100] ,char str2[100],int n,char m){
    int j = 0;
    for(int i = 0;str1[i] != '\0' ; i++){
        if(str1[i] != m){
            str2[j++] = str1[i];
        }}
    str2[j] = '\0';
    printf("the new formatted string is %s",str2);
    
}
int main(){
    char str1[100],str2[100],m;
    int n;
    puts("enter your string:");
    fgets(str1,100,stdin);
    printf("enter the character you wish to remove:");
    scanf("%c",&m);
    n = strlen(str1);
    delete(str1,str2,n,m);
    return 0;
}