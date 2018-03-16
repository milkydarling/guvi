#include <stdio.h>
void main()
{
int x,y,i,l;
long int t=100000;
scanf("%d%d",&x,&y);
if(x<y)
l=x;
else
l=y;
for(i=l;i<t;i++)
{
	if((i%x==0) && (i%y==0))
	{
		printf("%d",i);
		break;
	}
}
}
