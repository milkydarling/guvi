#include<stdio.h>
void main()
{
char m;
printf("enter a character");
scanf("%c",&m);
if((m>'a'&&m<'z')||(m>'A'&&m<'Z'));
{
printf("the character is alphabet");
}
else
{
printf("not");
}
}
