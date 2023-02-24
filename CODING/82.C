/*
TWO DISHES
Chef will have N guests in his house today. He wants to serve at least one dish to each of the N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has A fruits, B vegetables, and C fishes in his house. Can he prepare at least N dishes in total?
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, four integers N,A,B,C.
Output Format
For each test case, print "YES" if Chef can prepare at least N dishes, otherwise print "NO". Print the output without quotes.
*/
#include <stdio.h>

int main(void) {
	int t,a,b,c,n;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d%d",&n,&a,&b,&c);
	    if(b>=n&&a+c>=n)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	// your code goes here
	return 0;
}

