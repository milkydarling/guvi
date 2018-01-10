#include<stdio.h>
void main()
{
int n,ori,revised=0,remainder;
printf("enter number");
scanf("%d",&n);
ori=n;
while(n!=0)
{
remainder=n%10;
revised=revised*10+remainder;
n=n/10;
}
if(ori=n)
{
printf("yes");
}
else
{
printf("no");
}
}
