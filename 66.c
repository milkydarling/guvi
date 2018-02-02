#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if((n!=1)&&(n%2!=0)&&(n%3!=0)&&(n%5!=0))
{
printf("yes");
}
else
{
printf("no");
}
}
