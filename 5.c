#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three values");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a  is  big");
}
else
{
printf("c is big");
}
}
else
{
printf("b is big");
}
}
