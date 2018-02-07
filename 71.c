#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int l,f=0,i;
printf("enter a string");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]!=a[l-i-1])
    {
        f=1;
        break;
    }
}
if(f==1)
{
printf("no");
}
else
{
printf("yes");
}
}
