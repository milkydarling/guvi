#include<stdio.h>
void main()
{
int n,k,a[10],i;
printf("enter numbers");
scanf("%d%d",&n,&k);
printf("enter n numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==a[k])
{
printf("%d",a[i]);
}
}
}
