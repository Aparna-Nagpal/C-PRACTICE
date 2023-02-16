/*
TEKKEN difficulty rating:947
The ultimate battle has begun in Tekken.
Each fight has two players. Let the initial health of the players be X and Y, then, after the fight, the health of both the players reduces by 
min(X,Y)
Anna, Bob, and Claudio have initial health levels of A,B, and C respectively. Each pair of players fight exactly once.
Considering that you can schedule the fight between each pair in any order, find whether Anna can have a positive health level at the end of the battle.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains three space-separated integers A,B, and C — the initial health levels of Anna, Bob, and Claudio respectively.
Output Format
For each test case, output on a new line, YES, if you can schedule the fight between each pair in an order such that Anna can have a positive health at the end of the battle. Otherwise, output NO.
You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered identical.
*/
#include <stdio.h>

int min(int a,int b){
    int j=a;
    if(j>b)
    j=b;
    return(j);
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    int k,a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    k=min(b,c);
	    b=b-k;
	    c=c-k;
	    k=min(a,b);
	    a=a-k;
	    b=b-k;
	    k=min(a,c);
	    a=a-k;
	    c=c-k;
	    if(a>0)
	    {
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	    
	}
	return 0;
}

