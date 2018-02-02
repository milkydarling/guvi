#include<stdio.h>
void main()
{
char a[20];
int i,b=1,c;
printf("enter the string");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c=++b;
}
}
printf("%d",c);
}
