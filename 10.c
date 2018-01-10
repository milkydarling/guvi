#include<stdio.h>
void main()
{
int number,count=0;
printf("enter number");
scanf("%d",&number);
while(number!=0)
{
number=number/10;
count=count+1;
}
printf("number  of  digit is %d",count);
}
