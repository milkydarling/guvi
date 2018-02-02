#include<stdio.h>
void main()
{
char a[50];
int i,c=0;
printf("enter the string");
scanf("%s",&a[i]);
while(a[i]!='\0')
{
    if(((a[i]>'a')&&(a[i]<'z'))||((a[i]>'A')&&(a[i]<'Z'))||((a[i]>'0')&&(a[i]<'9')))
{
    c++;
}
}
if(c>=1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
