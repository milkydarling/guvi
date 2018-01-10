#include<stdio.h>
void main()
{
int n,ori,result=0,remainder;
printf("enter number");
scanf("%d",&n);
ori=n;
while(n!=0)
{
remainder=n%10;
result=result+(remainder*remainder*remainder);
n=n/10;
}
if(n==ori)
{
printf("palindrome");
}
else
{
printf("no");
}
}
