/*
ENORMOUS INPUT TEST
You are given N integers. Find the count of numbers divisible by K.
Input Format
The input begins with two positive integers N, K. The next N lines contains one positive integer each denoted by Ai.
Output Format
Output a single number denoting how many integers are divisible by K.
*/
#include<stdio.h>

int main()
{
	int a,b,k=0,i;
	scanf("%d%d",&a,&b);
	int l[a];
	for(i=0;i<a;i++)
	scanf("%d",&l[i]);
	for(i=0;i<a;i++)
	{
	    if(l[i]%b==0)
	    k++;
	}
	printf("%d",k);
	
	return 0;
}

