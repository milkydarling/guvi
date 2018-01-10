#include<stdio.h>
void main()
{
int num,i,sum=0;
printf("enter number");
scanf("%d",&num);
for(i=0;i<num;i++)
{
sum=sum+i;
}
pritnf("the addition is %d",sum);
}
