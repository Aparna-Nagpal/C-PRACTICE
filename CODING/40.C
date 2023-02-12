/*
OLYMPICS RANKING difficulty rating:893
In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1,S1,B1,and G2,S2,B2,the number of gold, silver and bronze medals won by two different countries respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.
Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers G1,S1,B1,and G2,S2,B2.
Output Format
For each test case, print "1" if the first country is ranked better or "2" otherwise. Output the answer without quotes.
*/
#include <stdio.h>

int main(void) {
	int t,a,b,c,c1,b1,a1;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&a1,&b1,&c1);
	    if(a+b+c>a1+b1+c1)
	    printf("1\n");
	    else
	    printf("2\n");
	}
	return 0;
}

