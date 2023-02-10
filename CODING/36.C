/*
CONSTRUCT N difficulty rating:860
You are given an integer N. Find if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's.
Formally, find if there exist two integers X,Y (X,Y≥0) such that 2⋅X+7⋅Y=N.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing an integer N.
Output Format
For each test case, print on a new line YES if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's and NO otherwise.
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
*/

#include <stdio.h>

int main(void) {
	int t;
	long int a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%ld",&a);
	    if((a%7)%2!=0 && a<7)
	    printf("No\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

