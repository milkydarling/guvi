#include<stdio.h>
void main()
{
int n,a[100],i,temp1,temp2;
printf("enter n value");
scanf("%d",&n);
for(i=0i<100;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1)
{
  temp1=a[i+1];
}
else
{
temp1=a[i];
}
}
          printf("%d",temp1);
          for(i=0;i<n;i++)
          {
            if(a[i]<a[i+1])
            {
              temp2=a[i];
            }
            else
            {
              temp2=a[i+1];
            }
          }
          printf("%d",temp2);
}
