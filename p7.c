#include<stdio.h>
#include<string.h>
void main()
{
char s[10],t;
int i,j;
scanf("%s",&s[i]);
j=strlen(s);
for(i=0;i<j;i++)
{
if(i%2==0)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
i++;
}
printf("%s",s);
}
