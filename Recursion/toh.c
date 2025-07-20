#include<stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c to %c\n",s,d);
    tower(n-1,h,s,d);
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    printf("moving disks...\n")
    tower(n,'A','B','C');
    printf("successful");
    return 0;
}
