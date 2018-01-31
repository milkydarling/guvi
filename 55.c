#include<stdio.h>
void main()
{
int m,n,pro;
scanf("%d%d",&n,&m);
pro=n*m;
printf("%d\n",pro);
if(pro%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
