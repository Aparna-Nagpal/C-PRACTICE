/*
Input Format
There is one line of  integers n separated by commas.
Constraints
The length of str is less than 8*10^5.
Sample Input
23,4,56
Sample Output
23
4
56
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[800000];
    int i;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]==',')
        printf("\n");
        else
        printf("%c",s[i]);
    }
}
