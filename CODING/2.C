//Program to find maximum and minimum elements of a given array.
#include<stdio.h>
void main()
{
    int max,min,i;
  int a[10]={8,4,4,9,5,8,7,8,2,1};
  max=a[0];
  min=a[0];
  for(i=1;i<10;i++)
  {
      if(a[i]>max)
      max=a[i];
      if(a[i]<min)
      min=a[i];
  }
  printf("%d %d",max,min);
}
