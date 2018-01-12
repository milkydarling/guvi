#include<stdio.h>
void main()
{
int n,a,d,l;
float s;
printf("enter  the  values  of  n,a,d");
scanf("%d%d%d",&n,&a,&d);
l=a+((n-1)*d);
s=(n/2)*(a+l);
printf("the  value  of  s is %d",s);
}
