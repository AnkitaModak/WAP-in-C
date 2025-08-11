#include<stdio.h>
#include<string.h>
int main(){
    char name[100],extracted[100];
    int m,n,i,j=0;
    puts("enter a string:");
    fgets(name,100,stdin);
    printf("enter from which position you want to extract:");
    scanf("%d",&n);
    printf("enter how many characters you want to extract:");
    scanf("%d",&m);
    for(i = n;i < n+m;i++){
        extracted[j++] = name[i];
    }
    extracted[j] = '\0';
    printf("%s\n",extracted);
    return 0;
}