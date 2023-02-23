/*
REVERSE THE NUMBER
Given an Integer N, write a program to reverse it.
Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
Output
For each test case, display the reverse of the given number N, in a new line
*/
# include <stdio.h>
#include<math.h>
int main() {
int t,a,b,s=0,k;
scanf("%d",&t);
while(t>0)
{
    t--;
    scanf("%d",&a);
    while(a>0)
    {
        
        k=a%10;
        a=a/10;
        s=s*10+k;
    }
    printf("%d\n",s);
    s=0;
}
	return 0;

	}

