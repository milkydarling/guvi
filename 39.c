#include<stdio.h>
void main()
{
int a[10],i;
printf("enter numbers\n");
for(i=0;i<10;i++)
{
scanf("%d",a[i]);

}for(i=0;i<10;i++)
{
if(a[i]<a[i+1])
{
a[i]=a[i+1];
}
}
printf("the biggest  number  is %d",a[i]);
}
