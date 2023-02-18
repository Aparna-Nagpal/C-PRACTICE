/*
FIND THE DIRECTION difficulty rating:880
Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly X seconds.
Note: There are only 4 directions: North, East, South, West (in clockwise order).
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single integer X.
Output Format
For each testcase, output the direction in which Chef is facing after exactly X seconds.
*/
#include <stdio.h>

int main(void) {
	int t,a,s;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a>=4)
	    s=a%4;
	    else
	    s=a;
	    if(s==1)
	    printf("East\n");
	    else if(s==2)
	    printf("South\n");
	    else if(s==3)
	    printf("West\n");
	    else
	    printf("North\n");
	}
	return 0;
}
