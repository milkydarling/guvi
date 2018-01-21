#include<stdio.h>
void main()
{
int a,b,temp;
scanf("%d\t\t%d\n",&a,&b);
temp=a;
a=b;
b=temp;
printf("swapped  number  is%d\t\t%d",a,b);
}
