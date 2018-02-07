#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int f=0;
printf("enter a word");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
{
f=1;
}
}
if(f>=1)
{
printf("vowels");
}
else
{
printf("no vowel");
}
}
