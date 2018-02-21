#include<stdio.h>
void main()
{
int a,b,i,x,lcm=1;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
x=(a>b)?a:b;

while(1)
{
if((x%a==0)&&(x%b==0))
{
lcm=lcm*x;
break;
}
++x;
}
printf(" the lcm is %d",lcm);
}
