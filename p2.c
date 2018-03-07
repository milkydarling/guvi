#include<stdio.h>
void main()
{
int n,fact=1,x;
scanf("%d",&n);
for(x=1;x<=n;x++)
{
fact=fact*x;
}
printf("%d",fact);
}
