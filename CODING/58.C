/*
GOLD MINING 880
Chef has decided to go to a gold mine along with N of his friends (thus, total N+1 people including Chef go to the gold mine).
The gold mine contains a total of X kg of gold. Every person has the capacity of carrying up atmost Y kg of gold.
Will Chef and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers N,X,Y.
Output Format
For each testcase, output "YES" if you and your friends can carry all the gold, otherwise output "NO".
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	int t,n,x,y;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d",&n,&x,&y);
	    if((n+1)*(y)>=x)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

