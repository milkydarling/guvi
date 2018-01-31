#include<stdio.h>
void main()
{
int n,a[100],sum=0,ave,i;
printf("enter the n value");
scanf("%d",&n);
printf("enter the n elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
ave=sum/n;
printf("the average is %d",ave);
}
