#include<stdio.h>
void main()
{
int n,n1,a[10],i,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
a[i]=n1;
n=n/10;
i++;
count++;
}
for(i=--count;i>=0;i--)
{
printf("/t%d",a[i]);
}
}
