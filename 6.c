#include<stdio.h>
void main()
{
int year;
printf("enter the  year");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
printf("the  given  year  is  leap");
}
else
{
printf("not  leap  year");
}
}
else
{
printf("not leap  year");
}
}
