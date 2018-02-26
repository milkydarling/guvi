#include<stdio.h>
void main()
{
int height,length,breadth,s,v;
scanf("%d%d%d",&height,&length,&breadth);
s=(2(height*length))+(2(length*breadth))+(2(height*breadth));
v=height*length*breadth;
printf("the surface area is %d",s);
printf("the volume is %d",v);
}
