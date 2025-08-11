#include<stdio.h>
#include<string.h>
void insert(char str1[100],int n,char str2[100],char m,int pos){
    int j = 0;
    for(int i = 0;i<pos;i++){
        str2[j++] = str1[i];
    }
    str2[j++] = m;
    for(int i = pos ; str1[i] != '\0';i++){
        str2[j++] = str1[i];
    }
    str2[j] = '\0';
    printf("the string is %s", str2);
}
int main(){
    char str1[100],str2[100],m;
    int pos;
    puts("enter the string:");
    fgets(str1,100,stdin);
    printf("enter the character you want to insert:");
    scanf("%c",&m);
    printf("enter the position where you wish to insert a string:");
    scanf("%d",&pos);
    int n = strlen(str1);
    insert(str1,n,str2,m,pos);
    return 0 ;
}