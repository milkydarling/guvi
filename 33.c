#include<stdio.h>
void main()
{
char str[100];
int i,blank=0;
printf("enter the string");
scanf("%s",&str[i]);
while(str[i]!='\0')
{
if(!((str[i]>='a')&&(str[i]<='z')))
{
blank=blank+1;
}
i++;
}
printf("%d",blank);
}
