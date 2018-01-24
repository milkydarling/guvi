#include<stdio.h>
void main()
{
int n,a[100],i;
printf("enter n value");
scanf("%d",&n);
for(i=0i<100;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1)
{
printf("the large number is %d",a[i+1];
}
else
{
printf("the lowest number is %d",a[i]);
}
}
}
