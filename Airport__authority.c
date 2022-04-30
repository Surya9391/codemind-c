#include<stdio.h>
int main()
{
    int t,arr[100],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        k=k+1;
        else
        {
            k=k+2;
      
       }
    
        
    }
    printf("%d",k);
    return 0;
}