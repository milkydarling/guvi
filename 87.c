#include<stdio.h>
void main()
{
int a,b,i,x=1;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
if((a%i==0)&&(b%i==0))
{
x=x*i;
}
}
printf(" the gcd is %d",x);
}
