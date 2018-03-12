#include <stdio.h>
#include <string.h>
int main()
{
   char a[6];
   int x[30], n, i,s=0;
   scanf("%s",a);
   n =strlen(a);
   for(i = 0; i < n; i++)
   {
      switch (a[i])
      {
     case 'I':  x[i] = 1;
     s=x[i]+s;
            break;
     case 'V':  x[i] = 5;
            s=s+x[i];
            break;
     case 'X':  x[i] = 10;
            s=x[i]+s;
     		break;
      }
   }
   printf("%d", s);
   return 0;
}
