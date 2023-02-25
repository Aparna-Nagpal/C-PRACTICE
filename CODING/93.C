/*
CHEF ON DATE difficulty rating:294
Chef and his girlfriend go on a date. Chef took X dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of Y dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input, containing two space-separated integers X and Y.
Output Format
For each test case, output on a new line "YES" if Chef has enough money to pay the bill and "NO" otherwise.
You may print each character of the string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    if(a>=b)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

