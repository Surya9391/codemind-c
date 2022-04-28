#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,d,s=0;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        d=a%10;
        s=s+d;
        a=a/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}