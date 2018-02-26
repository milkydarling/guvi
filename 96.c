#include<stdio.h>
void main()
{
int a;
printf("enter number");
scanf("%d",&a);
if((a==1)||(a==2)||(a==3))
{
    printf("no");
}
else
if((a%2==0)||(a%3==0)||(a%5==0)||(a%6==0))
{
printf("the number is composite");
}
else
{
printf("no");
}
}
