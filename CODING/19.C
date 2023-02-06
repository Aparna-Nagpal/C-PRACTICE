/*
WORDLE difficulty rating:804
Chef invented a modified wordle.
There is a hidden word S and a guess word T, both of length 5.
Chef defines a string M to determine the correctness of the guess word. For the ith index:
If the guess at the ith  index is correct, the ith  character of M is G.
If the guess at the ith index is wrong, the i th character of M is B.
Given the hidden word S and guess T, determine string M.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string S - the hidden word.
Second line contains the string T - the guess word.
Output Format
For each test case, print the value of string M.
*/

#include <stdio.h>

int main(void) {
int t,i;
scanf("%d",&t);
while(t>0)
{
    t--;
    char a[5],b[5];
    scanf("%s%s",a,b);
    for(i=0;i<5;i++)
    {
        if(a[i]==b[i])
        printf("G");
        else
        printf("B");
    }
    printf("\n");
}
	return 0;
}

