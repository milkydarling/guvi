#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i;
scanf("%s",&a[i]);
printf("even position\n");
for(i=0;a[i]!='\0';i++)
{
if(i%2!=0)
{
printf("%c\n",a[i]);
}
}
printf("odd position\n");
for(i=0;a[i]!='\0';i++)
{
if((i%2==0))
{
printf("%c\n",a[i]);
}
}
}
