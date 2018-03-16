#include<stdio.h>
#include<string.h>
void main()
{
char a[10],ch;
int count=0,max=0,i,j;
scanf("%s",&a[i]);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
max++;
if(max>count)
{
count=max;
ch=a[i];
}
}
}
}
printf("%c",ch);
}
