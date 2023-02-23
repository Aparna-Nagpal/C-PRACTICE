/*
SUM OF DIGITS
You're given an integer N. Write a program to calculate the sum of all the digits of N.
Input Format
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.
Output Format
For each test case, calculate the sum of digits of N, and display it in a new line.
*/
#include <stdio.h>

int main(void) {
	int t,a,k,s=0;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    while(a>0)
	    {
	        k=a%10;
	        a=a/10;
	        s=s+k;
	        
	    }
	    printf("%d\n",s);
	    s=0;
	}
	
	return 0;
}

