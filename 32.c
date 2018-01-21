#include<stdio.h>
void main()
{
char string[50];
int words=0,i=o;
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if((string[i]==' ')||(string[i]=='\n')||(string[i]=='\t'))
{
words+=1;
}
i++;
}
printf("total words %d",words);
}
