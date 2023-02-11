/*
RELATIVITY difficulty ratind:872
In Chefland, the speed of light is c m/s, and acceleration due to gravity is g m/s^2 .
Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance, he achieves the speed of light and verifies Einstein's theory of special relativity.
Assume he jumps at zero velocity and at any time, his velocity (v) and depth of descent (H) are related as v^2=2⋅g⋅H.
Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers g,c.
Output
For each test case, output in a single line the answer to the problem. We can show that under the constraints, the answer is an integer.
*/
#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",b*b/a/2);
	}
	return 0;
}

