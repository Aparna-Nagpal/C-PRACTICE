/*
BURGERS difficulty rating:263
Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.
Find the maximum number of burgers that Chef can make.
Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B, the number of patties and buns respectively.
Output Format
For each test case, output the maximum number of burgers that Chef can make.
*/
#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    if(a>b)
	    printf("%d\n",b);
	    else
	    printf("%d\n",a);
	    
	}
	return 0;
}

