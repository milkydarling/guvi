#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int i,l,x=0;
scanf("%[^\n]s",&a[i]);
l=strlen(a);
for(i=0;i<l;i++)
{
if(i==0)
{
a[i]=a[i]-32;
}
if(a[i]==' ')
{
a[i+1]=a[i+1]-32;
}
if(a[i]>='0' &&a[i]<='9')
{
x=1;
}
}
if(x==1)
{
printf("error");
}
else
{
printf("%s",a);
}
}
