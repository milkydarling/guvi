#include<stdio.h>
void main()
{
int n;
printf("enter number");
scanf("%d",&n);
if((n==1)||(n==2)||(n==3))
{
    printf("no");
}
else
if((n%2==0)||(n%3==0)||(n%5==0)||(n%6==0))
{
printf("the number is composite");
}
else
{
printf("no");
}
}
