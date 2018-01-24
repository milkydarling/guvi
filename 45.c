#include<stdio.h>
void main()
{
int n,n1,count=0;
printf("enter n number");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
count+=1;
n=n/10;
}
printf("%d",count);
}
