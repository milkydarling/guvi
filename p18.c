#include <stdio.h>
void main() {
	int x,i,j,f;
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	{
		f=0;
	if(x%i==0)
	{
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
			}
		if(f==0)
			printf("%d ",i);
	
	}
	        
	}
}
