#include<stdio.h>
void main()
{
int n,a[100],i,j,temp;
printf("enter number");
scanf("%d",&n);
printf("enter n numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[j];
}
else
{
temp=a[i];
}
}
}
printf("%d",temp);
}
