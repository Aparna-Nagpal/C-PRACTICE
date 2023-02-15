/*
TOTAL EXPENSES difficulty rating:861
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.
Input Format
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.
Output Format
For each test case, output the total expenses while purchasing items, in a new line.
*/
#include <stdio.h>

int main(void) {
	int t,q;
	float p;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%f",&q,&p);
	    if(q>1000)
	    printf("%f\n",0.9*p*q);
	    else
	    printf("%f\n",p*q);
	}
		return 0;
}
