/*
WHICH DIVISION difficulty rating:867
Given the rating R of a person, tell which division he belongs to. The rating range for each division are given below:
Division 1: 2000≤ Rating.
Division 2:1600≤ Rating <2000.
Division 3: Rating <1600.
Input Format
The first line of the input contains T - the number of test cases. Then the test cases follow.
Each testcase contains a single line of input, which contains a single integer R.
Output Format
For each test case, output on a single line the answer: 1 if the person belongs to Division 1, 2 if the person belongs to Division 2, and 3 if the person belongs to Division 3.
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a>=2000)
	    printf("1\n");
	    else if(a<2000&&a>=1600)
	    printf("2\n");
	    else
	    printf("3\n");
	    
	}
		return 0;
}
