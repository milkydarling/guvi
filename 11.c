#include<stdio.h>
void main()
{
int n,m;
int result=1;
printf("enter n,m values");
scanf("%d%d",&n,&m);
while(m!=0)
{
result=result*n;
m=m-1;
}
printf("the value is %d",result);
}
