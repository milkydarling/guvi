#include<stdio.h>
void main()
{
int n,i,c;
printf("enter the value");
scanf("%d",&n);
int a=0,b=1;
printf("%d %d\t",a,b);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\t",c);
}
}
