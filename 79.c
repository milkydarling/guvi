#include<stdio.h>
void main()
{
int n,m,p;
printf("enter 2 numbers");
scanf("%d%d\n",&n,&m);
p=n*m;
printf("product is %d\n",p);
if(n==m)
{
printf("perfect square\n");
}
else
{
printf("no\n");
}
}
