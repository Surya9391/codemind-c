#include<stdio.h>
int main()
{
    int i,n,fact=1,sum=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1;
        fact=1;
        d=n%10;
        while(i<=d)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}