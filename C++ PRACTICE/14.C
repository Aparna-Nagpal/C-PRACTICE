/*
THE HURDLE RACE
The first line contains two space-separated integers n and k, the number of hurdles and the maximum height the character can jump naturally.
The second line contains n space-separated integers height[i] where 0<=i<n.
Sample Input 0
5 4
1 6 3 5 2
Sample Output 0
2
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,max;
        scanf("%d%d",&a,&b);
        int s[a];
        for(i=0;i<a;i++)
        scanf("%d",&s[i]);
        max=s[0];
        for(i=1;i<a;i++)
        {
            if(s[i]>max)
            max=s[i];
        }
        if(max>=b)
        printf("%d",max-b);
        else
        printf("0");
        printf("\n");
}
