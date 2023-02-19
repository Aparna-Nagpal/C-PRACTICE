/*
JUDGING DELAY difficulty rating:964
You have been recently hired as a developer in CodeChef. Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest.
There are N submissions, numbered 1 through N. For each valid i, the i-th submission was submitted at time Si and judged at time Ji(in minutes). Submitting and judging both take zero time. Please determine how many submissions received their verdicts after a delay of more than 5 minutes.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of the input contains a single integer N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ji.
Output
For each test case, print a single line containing one integer — the number of submissions for which the judging was delayed by more than 5 minutes.
*/
#include <stdio.h>

int main(void) {
	int t,l,a,b,p;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    l=0;
	    scanf("%d",&p);
	    while(p>0)
	    {
	        scanf("%d%d",&a,&b);
	        if(b-a>5)
	        l++;
	        p--;
	    }
	    printf("%d\n",l);
	}
	return 0;
}

