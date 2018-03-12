#include<stdio.h>
#include<string.h>
void main()
{
        char a[10],b[10];
        int m,n,g,h,i,j,x,y,z=0;
        scanf("%s%s",&a[i],&b[i]);
        m=strlen(a);
        n=strlen(b);
        if(m==n)
        {
                for(i=0;i<m;i++)
                {
                        for(j=i+1;j<m;j++)
                        {
                                g=a[i];
                                h=a[j];
                                i=b[i];
                                j=b[j];
                                x=g-h;
                                y=i-j;
                                if(x==y)
                                {
                                        z=1;
                                }
                                else
                                {
                                        z=0;
                                }
                        }
                }
                
        }
        else
        {
                printf("no");
        }
        if(z==1)
        {
                printf("yes");
        }
        else
        {
                printf("no");
        }
        
}
