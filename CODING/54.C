/*
CHEF ON LAND difficulty rating:878
Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. He needs x1 units of food supply and y1 units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly D days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?

###Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, five integers x,y,x1,y1,D.
###Output: For each testcase, output in a single line answer "YES" if Chef can reach the shore by building the boat and "NO" if not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	int t,x,x1,y,y1,d;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d%d%d",&x,&y,&x1,&y1,&d);
	    if(x/x1>=d&&y/y1>=d)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

