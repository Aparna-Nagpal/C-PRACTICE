/*
MINIMUM NUMBER OF COINS difficulty rating:711
Chef has infinite coins in denominations of rupees 5 and rupees 10.
Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single integer X.
Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a%5==0)
	    {
	        if(a%10==0)
	        printf("%d\n",a/10);
	        else
	        printf("%d\n",a/10+1);
	        
	    }
	    else
	    printf("-1\n");
	}
	return 0;
}
