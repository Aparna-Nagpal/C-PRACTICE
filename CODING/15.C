/*
GOOD INVESTMENT OR NOT difficulty rating 357
Chef has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum.
An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
Determine whether the investment made by Chef is good or not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two integers X and Y, the interest rate and the current inflation rate respectively.
*/
#include <stdio.h>

int main(void) {
    int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    if(2*b<=a)
	    printf("yes");
	    else
	    printf("no");
	    printf("\n");
	}
	return 0;
}

