#include<stdio.h>
void main()
{
int j,i,n,k,a[10],x;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
	{
	    x=a[n-1];
		for(j=n-1;j>=1;j--)
		{
		a[j]=a[j-1];
	    }
	    a[0]=x;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
  return 0;
}
