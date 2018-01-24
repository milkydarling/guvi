#include<stdio.h>
void main()
{
char a[20],b[20];
printf("enter 2 strings");
gets(a);
gets(b);
strcat(a,b);
printf("the  concatenated string is %s",a);
}
