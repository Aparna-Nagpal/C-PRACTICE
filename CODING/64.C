/*
SNAPCHAT difficulty rating:965
The most popular feature on snapchat is Snapchat Streak.
A streak is maintained between two people if both of them send at least one snap to each other daily.
If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 0.Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for N consecutive days.
On the ℎith day, Chef sent Ai snaps to Chefina while Chefina sent Bi snaps to Chef.
Find the maximum streak count they achieved in those N days.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the number of days you observed.
The second lines contains N space-separated integers — A1,A2,…,AN,the number of snaps Chef sent to Chefina on the ℎith day.
The third lines contains N space-separated integers — B1,B2,…,BN,the number of snaps Chefina sent to Chef on the ℎith   day.
Output Format
For each test case, output on a new line, the maximum streak count they achieved in those N days.
*/
#include <stdio.h>

int main(void) {
	int t,i,g,l,r;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    l=0;
	    g=0;
	    scanf("%d",&r);
	    int a[r],b[r];
	    for(i=0;i<r;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<r;i++)
	    scanf("%d",&b[i]);
	    for(i=0;i<r;i++)
	    {
	        if(a[i]==0||b[i]==0)
	        l=0;
	        else
	        l++;
	        if(l>g)
	        g=l;
	    }
	    printf("%d\n",g);
	}
	return 0;
}

