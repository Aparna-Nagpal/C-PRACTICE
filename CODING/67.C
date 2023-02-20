/*
THE SQUID GAME difficulty rating:970
"Let the games begin."

Squid Game has become a blockbuster hit and the frontman is now finding it difficult to accommodate all the participants in Squid Game 2.0. So, he decided that he will allow only those participants who could solve the following problem.
There are a total of N players who are competing in the Squid Game, numbered from 1 to N. When the ith player gets eliminated from the game,Ai amount of money is added to the prize pool. The game is played until− N−1 players get eliminated, and the only player left is declared as the winner. The winner gets all the money present in the prize pool.
You are given an array A consisting of N elements, where Ai denotes the prize money added to the prize pool when the ith player gets eliminated from the game. Find the maximum prize that the winner can get, given that you can choose any player to be the winner.
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N, denoting the number of players.
The second line of each test case contains N space-separated integers A1,A2,…,AN, denoting the amount of money added to the prize pool when the ith (1≤i≤N) player dies.
Output Format
For each test case, output in a single line the maximum prize that the winner can get, given that you can choose any player to be the winner.
*/
#include <stdio.h>

int main(void) {
	int t,r,min,s,i;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&r);
	    int a[r];
	    s=0;
	    for(i=0;i<r;i++)
	    scanf("%d",&a[i]);
	   min=a[0];
	   for(i=0;i<r;i++)
	   {s=s+a[i];
	   if(a[i]<min)
	   min=a[i];
	   }
	   printf("%d\n",s-min);
	   
	}
	return 0;
}

