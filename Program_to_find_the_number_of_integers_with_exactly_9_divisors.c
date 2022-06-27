#include<stdio.h>
int cd(int n)
{
int i,c= 0;
for (i=1;i<=n;i++)
{
if (n%i==0)
c=c+1;
}
return c;
}

void cd9(int n)
{
int i,c=0;
for (i=1;i<=n;i++)
{
if (cd(i)==9)
{
printf("%d ",i);
c=c+1;
}
}
printf("
Total=%d",c);
}

int main()
{
int n;
scanf("%d",&n);
cd9(n);
return 0;
}

