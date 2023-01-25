//Program to move all the negative elements to one side of an array.
#include <stdio.h>

int main()
{
   int a[10]={8,4,-4,-9,5,-8,-7,8,-2,1};
   int b[100],t=0,i,d=0,c[100];
   for(i=0;i<10;i++)
   {
       if(a[i]<0)
       {
           b[t]=a[i];
           t++;
       }
       else
       {
       c[d]=a[i];
       d++;
   }
       
   }
   for(i=0;i<t;i++)
   printf("%d  ",b[i]);
   for(i=0;i<d;i++)
   printf("%d  ",c[i]);

    return 0;
}
