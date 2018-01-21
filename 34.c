#include<stdio.h>
void main()
{
char string[50];
int i,count=0;
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if(string[i]=='.')
{
count+=1;
}
i++;
}
printf("%d",count);
}
