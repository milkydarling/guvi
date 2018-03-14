#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,l,m;
scanf("%s",&a[i]);
l=strlen(a);
for(i=l;i>=0;i--)
{
if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u'))
{
printf("%c",a[i]);
}
}
}
