#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,j,l,m,c=0;
scanf("%s%s",&a[i],&b[j]);
l=strlen(a);
m=strlen(b);
for(i=0;i<=l;i++)
{
for(j=0;j<=m;j++)
{
if(a[i]!=b[j])
{
c++;
}
}
}
if(c!=0)
{
printf("%d",c);
}
}
