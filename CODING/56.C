/*
DIFFERENT CONSECUTIVE CHARACTERS difficulty rating:879
Chef has a binary string S of length N. Chef can perform the following operation on S:
Insert any character (0 or 1) at any position in S.
Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the length of the binary string S.
The second line of each test case contains a binary string S of length N containing 0s and 1s only.
Output Format
For each test case, output on a new line the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.
*/
#include <stdio.h>

int main(void) {
	int t,i,l,y;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    l=0;
	    scanf("%d",&y);
	    char a[y];
	    scanf("%s",a);
	    for(i=0;a[i];i++)
	    {
	        if(a[i]==a[i+1])
	        l++;
	    }
	    printf("%d\n",l);
	}
	return 0;
}

