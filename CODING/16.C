/*
FINAL POPULATION difficulty rating 358
There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town.
Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case consists of three integers X, Y and Z.
*/
#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",a+c-b);
	}
	return 0;
}

