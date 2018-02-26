#include<stdio.h>
void main()
{
int N,n,sum=0,i,x;
scanf("%d%d",&N,&n);
x=N+n;
for(i=N;i<=x;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
}
