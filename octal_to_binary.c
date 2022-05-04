#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,p=0,s=0,i=0,j=0;
    scanf("%lld",&n);
    while(n)
    {
        d=n%10;
        p=p+(d*pow(8,i++));
        n=n/10;
    }
    i=1;
    s=0;
    while(p)
    {
        s=s+(p%2)*i;
        p=p/2;
        i=i*10;
    }
    printf("%lld",s);
    return 0;
    
}