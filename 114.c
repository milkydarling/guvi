#include<stdio.h>
void main()
{
int n,k,a[10],b[5],i,count=0,j=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
        b[j]=a[i];
        j++;
}
}
for(i=0;i<n;i++)
{
        if(i=k)
        {
                printf("%d",b[i]);
        }
}
}
