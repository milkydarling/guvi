#include<stdio.h>
void main()
{
int n,m,i;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{
if((i!=1)&&(i%2!=0)&&(i%3!=0)&&(i%5!=0))
{
printf("%d\t",i);
}
if((i==2)||(i==3)||(i==5))
{
printf("%d\t",i);
}
}
}
