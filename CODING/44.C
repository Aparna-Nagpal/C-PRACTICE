/*
COUNTING PRETTY NUMBERS difficulty rating:873
Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2,3or9.
Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers L and R.
Output
For each test case, print a single line containing one integer — the number of pretty numbers between L and R.
*/
#include <stdio.h>

int main(void) {
    int t,a,b,i,g;
    scanf("%d",&t);
    while(t>0)
    {
        g=0;
        t--;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            g++;
        }
        printf("%d\n",g);
    }
	return 0;
}
