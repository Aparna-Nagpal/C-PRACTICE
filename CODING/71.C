/*
TOUR OF KING difficulty rating:283
King loves to go on tours with his friends.
King has N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.
Input Format
The first line of input contains a single integer T, the number of test cases.
The first and only line of each test case contains two space-separated integers N and M — the number of 5-seaters and 7-seaters, respectively.
Output Format
For each test case, output on a new line the maximum number of people that can travel together.
*/
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",5*a+7*b);
	}
	return 0;
}

