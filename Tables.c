#include<stdio.h>
int main()
{
    
    int i,n,d;
    scanf("%d %d",&n,&d);
    for(i=0;i<=d;i++)
    {
        if(i%2)
        {
            printf("%d x %d = %d
",n,i,n*i);
            
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}