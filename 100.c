#include<stdio.h>
void main()
{
int n,n1,pro=1;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
pro=pro*n1;
n=n/10;
}
printf("product is %d",pro);
}
