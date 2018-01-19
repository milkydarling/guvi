#include<stdio.h>
void main()
{
int n,a[50],i,temp;
printf("enter number");
scanf("%d",&n);
printf("enter some numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i+1];
}
else
{
    temp=a[i];
}
}
printf("%d",temp);
}
