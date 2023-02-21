/*
WHO IS TALLER difficulty rating:281
Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.
Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. Help Charlie decide who is taller.
It is guaranteed that X=Y.
Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two integers X and Y, as described in the problem statement.
Output Format
For each test case, output on a new line A if Alice is taller than Bob, else output B. The output is case insensitive, i.e, both A and a will be accepted as correct answers when Alice is taller.
*/
#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d%d",&x,&y);
        if(x>y)
        printf("A\n");
        else
        printf("B\n");
    }
	return 0;
}
