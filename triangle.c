#include <stdio.h>
#include <math.h>
int main() {
    int a , b , c;
    float area,s;
    printf("enter sides:");
    scanf("%d %d %d" , &a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the triangle is %f" , area);
    return 0;
}