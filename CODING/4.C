//Program to find intersection and union of two arrays
#include <stdio.h>

int main()
{
   int a[10]={10,20,40,40,50,70,80,80,80,90};
   int b[10]={1,2,4,4,5,7,8,8,8,9};
   int t=0,i,c[100],d[100],y=0;
   for(t=0;t<10;t++)
   {
   for(i=0;i<10;i++)
   {
       if(a[t]==b[i])
       {
           c[y]=a[i];
           y++;
       }
       
       for(i=0;i<10;i++)
       d[i]=a[i];
       
       for(i=0;i<10;i++)
       d[i+10]=b[i];
       
   }
       
   }
   
   {
       printf("INTERSECTION=");
       if(y==0)
       printf("NULL\n");
       else
   for(i=0;i<y;i++)
   printf("%d  ",c[i]);
   printf("UNION\n");
   for(i=0;i<20;i++)
   printf("%d  ",d[i]);
   }

    return 0;
}
