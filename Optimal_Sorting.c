#include<stdio.h>
int max(int* arr,int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int min(int* arr,int n)
{
    int min=arr[0],i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        int n,i,arr[100],m,l,res[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int x=0,a=1;
        while(a==1 && x<n-1)
        {
            if(arr[x]>arr[x+1])
            a=0;
            x++;
        }
        m=max(arr,n);
        l=min(arr,n);
        if(a==1)
        printf("0");
        else
        printf("%d
",m-l);
    }
    
}