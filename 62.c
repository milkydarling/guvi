#include<stdio.h>
void main()
{
int n,n1,i,a[100],count;
printf("enter number");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
a[i]=n1;
n=n/10;
i++;count++;
}
for(i=--count;i>=0;i++)
{
if((a[i]==1)||(a[i]==0))
{
printf("yes");
}
else
{
printf("no");
}
}
}

