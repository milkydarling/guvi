#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,x=1,j;
scanf("%s",&a[i]);
for(i=0;a[i]!='\0';i++)
{
    for(j=1;a[j]!='\0';j++)

{
if(a[i]==a[j])
{
x++;
}
else
{
x=1;
}
}
}
if(x==1)
{
printf("isogram");
}
else
{
printf("no isogram");
}
}
