#include<stdio.h>
void main()
{
int n1,n2,remainder,result=0,i;
printf("enter numbers");
scanf("%d%d",&n1,&n2);
for(i=n1;i<n2;i++)
{
remainder=i%10;
result=result+(remainder*remainder*remainder);
i=i/10;
printf("%d",i);
}
}
