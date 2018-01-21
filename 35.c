#include<stdio.h>
void main()
{
char string[50];
int i,count=0;
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if((string[i]>='0')&&(string[i]<='9'))
{
count+=1;
}
i++;
}
printf("%d",count);
}
