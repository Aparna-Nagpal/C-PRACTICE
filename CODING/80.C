/*
ADD TWO NUMBERS
The task is very simple: given two integers A and B, write a program to add these two numbers and output it.
Input Format
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.
Output Format
For each test case, add A and B and display the sum in a new line
*/
#include <stdio.h> 

int main() {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",a+b);
	}

	return 0;
}
