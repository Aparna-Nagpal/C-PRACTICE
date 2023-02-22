/*
VALID EXPRESSION
The correct way of evaluating an expression with ∗,+, and − that is, first multiplication, then addition, and then subtraction. For example, the expression 2+3∗7−5=2+21−5=23−5=18.
You are given integers N and X. Your task is to generate a string S of length N consisting only of ∗,+, and − such that when these N operators are placed in order between (N+1) ones, the result of the expression becomes X.
For example, if S= ++-*-, the resulting expression is 1+1+1−1∗1−1, which is then evaluated based on the rules above.
If multiple such strings exist, print any of them. If no such string exists, print −1 instead.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and X — the number of characters in the string and the result of expression after appending (N+1) ones between all operators.
Output Format
For each test case, output on a new line a string S of length N consisting only of ∗,+, and − that satisfies the given condition.
*/
#include <stdio.h>

int main(void) {
    int t,a,b,i;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int l=0;
        scanf("%d%d",&a,&b);
        if(a+1==b )
        {
            for(i=0;i<a;i++)
            printf("+");
        }
        else if(b==0)
        {
            for(i=0;i<a-1;i++)
            printf("*");
            printf("-");
            
        }
        
        else if(a>=b && b>0 && b<=a)
        {
            for(i=0;i<a-b+1;i++)
            {
            printf("*");
            l++;
            }
            if(l<a)
            {
                for(i=0;i<a-l;i++)
                printf("+");
            }
        }
        else if(a>=b && b<0 && a+b==0)
        {
            printf("-1");
        }
        else if(a>=b && b<0 && a+b>0)
        {
            
            for(i=0;i>=b;i--)
            printf("-");
            for(i=0;i<a+b-1;i++)
            printf("*");
            
            
            
        }
        else
        printf("-1");
        printf("\n");
        
        }
	// your code goes here
	return 0;
}
