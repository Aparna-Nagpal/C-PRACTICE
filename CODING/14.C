/*
APPLES AND ORANGES difficulty rating 355
Bob has X rupees and goes to a market. The cost of apples is Rs. A per kg and the cost of oranges is Rs. B per kg.
Determine whether he can buy at least 1 kg each of apples and oranges.
Input Format
The first line of input will contain an integer X, the amount of money Bob has.
The second line of input contains two space-separated integers A and B, the cost per kg of apples and oranges respectively.
*/

#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b+c<=a)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}
