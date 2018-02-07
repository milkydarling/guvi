#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
printf("%d",i);
}
}
}
