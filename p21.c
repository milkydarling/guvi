#include<stdio.h>
void main()
{
        int a[2],b[2],i,f=0;
        for(i=0;i<2;i++)
        {
        scanf("%d",&a[i]);
        }
         for(i=0;i<2;i++)
        {
        scanf("%d",&b[i]);
        }
         for(i=0;i<2;i++)
        {
        if((a[i]==b[i]))
        {
               f=1;
        }
        }
      if(f==1)
      {
              printf("yes");
              
      }
      else
      {
              printf("no");
      }
}
