#include<stdio.h>
void main()
{
int n,m,temp;
printf(" enter two numbers");
scanf("%d%d",&n,&m);
temp=n;
n=m;
m=temp;
printf("the swaaping numbers are %d %d",n,m);
}
