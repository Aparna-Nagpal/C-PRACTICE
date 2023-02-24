/*
MOTIVATION
Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His friend has N movies represented with (Si,Ri) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and X.N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ri.
Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.
*/
#include <stdio.h>

int main(void) {
	int t,max,a,b,i,n,x;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&n,&x);
	    max=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d%d",&a,&b);
	        if(a<=x)
	        {
	            if(b>max)
	            max=b;
	        }
	    }
	    
	    printf("%d\n",max);
	}
	// your code goes here
	return 0;
}

