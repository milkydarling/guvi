#include<stdio.h>
void main()
{
int a[10],i,j,temp;
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
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
printf("the largest number is %d",temp);
}
