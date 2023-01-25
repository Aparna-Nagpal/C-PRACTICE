//Program to find the sum of prime numbers from 10 to 50.
#include<stdio.h>
void main()
{
  int a,b,i,h=0,s=0;
  for(a=10;a<=50;a++)
  {
      h=0;
  for(i=2;i<a;i++)
  {
    h++;
  
  if(a%i==0)
  break;
 }
  if(h==a-2)
  s=s+a;
  }
  printf("%d",s);
}
