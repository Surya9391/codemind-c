#include<stdio.h>
int main()
{
    int i,j,n,a,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c=0;
        for(j=a;j<=b;j++)
        {
            if(j%10==2||j%10==3||j%10==8)
            {
                c=c+1;
            }
        }
        printf("%d
",c);
    }
}