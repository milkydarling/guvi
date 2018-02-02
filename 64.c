#include<stdio.h>
void main()
{
int a,b;
scanf("%d%d",&a,&b);
int sum=a+b;
printf("%d",sum);
if(sum%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
}
