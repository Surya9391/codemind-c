#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0)
    {
       d=pow(a,b);
       n=d%c;
    }
    printf("%d",n);
}