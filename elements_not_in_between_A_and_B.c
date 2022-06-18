#include<stdio.h>
int main()
{
    int a,b,i,arr[100],n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(!(arr[i]>=a && arr[i]<=b))
        {
            printf("%d ",arr[i]);
            s++;
        }
    }
    if(s==0)
    {
        printf("-1");
    }    

}