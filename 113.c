#include<stdio.h>
void main()
{
int n,k,a[10],i,count=0;
scanf("%d%d",&n,&k);
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}
printf("%d",count);
}
