#include<stdio.h>
void main()
{
        int a,b,n,p=0;
        scanf("%d%d",&a,&b);
        int i;
       
        for(i=b;i>=a;i--)
        {
                if((a%i==0)&&(b%i==0))
                {
                          printf("%d",i);
                }
        }    
}
