#include<stdio.h>
int main()
{
    int num,temp,sum=0,d;
    scanf("%d",&temp);
    num=temp;
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    if(temp%sum==0)
    printf("True");
    else
    printf("False");
}