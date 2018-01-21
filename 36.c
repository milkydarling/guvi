#include<stdio.h>
void main()
{
char string[50];
int i;
int alphabet=0,numeric=0,special=0;
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if((string[i]>='0')&&(string[i]<='9'))
{
numeric+=1;
}
else
if(((string[i]>='a')&&(string[i]<='z'))||((string[i]>='A')&&(string[i]<='Z')))
{
alphabet+=1;
}
else
{
special+=1;
}
i++;
}
printf("numeric\t alphabet\tspecial\n");
printf("%d\t%d\t%d",numeric,alphabet,special);
}
