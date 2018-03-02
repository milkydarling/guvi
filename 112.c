#include<stdio.h>
void main()
{
int N,k,n[10],i,x=0;
printf("enter N value and k value");
scanf("%d%d",&N,&k);

for(i=0;i<N;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<N;i++)
{
if(n[i]==k)
{
x++;
}
}
if(i!=0)
{
printf("yes");
}
else
{
printf("no");
}
}
