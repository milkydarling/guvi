#include<stdio.h>
void main()
{
int min,hour,minutes;
printf("enter the  minutes");
scanf("%d",&min);
hour=min/60;
minutes=min%60;
printf("HOUR\t\tMINUTES\n");
printf("%d\t\t%d",hour,minutes);
}
