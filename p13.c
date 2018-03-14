#include<stdio.h>
void main()
{
int n,m,sum=0,s;
scanf("%d",&n);
while(n!=0)
{
m=n%10;
s=m*m;
sum=sum+s;
n=n/10;
}
printf("%d",sum);
}
