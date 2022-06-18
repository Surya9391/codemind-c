#include<stdio.h>
int main()
{
    int a,b,c,d,h;
    scanf("%d%d%d",&a,&b,&c);
    d=2*a*b*c*512;
    h=d/1024;
    printf("%dKB",h);
}