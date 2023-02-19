/*
CHEF AND SPELLS difficulty rating:965
Chef has three spells. Their powers are A, B, and C respectively. Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P.
Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.
Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers A, B, and C.
Output Format
For each test case, print a single line containing one integer — the maximum number of hit points.
*/
#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d",&a,&b,&c);
	    if(a<=b&&a<=c)
	    a=0;
	    else if(b<=a&&b<=c)
	    b=0;
	    else
	    c=0;
	    printf("%d\n",a+b+c);
	}
	return 0;
}

