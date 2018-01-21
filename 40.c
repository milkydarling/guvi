#include<stdio.h>
void main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
int a=0,b=1,c;
printf("%d%d",a,b);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}
