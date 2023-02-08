/*
BI_LINDROME
You are given a string S of length N.
Your task is to delete a subsequence of maximum length from the string, such that, after concatenating the remaining parts of the string, it becomes a palindrome of length greater than 1.
If this is possible, print the maximum length of the subsequence that can be deleted. Otherwise, print −1.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input:
The first line consists the a single integer N - the length of string S.
The second line contains string S, consisting of lowercase english alphabets.
Output Format
For each test case, if it is possible to delete a subsequence under the given conditions, print a single integer, denoting the maximum length of the subsequence that can be deleted. Otherwise, print −1
*/
#include <stdio.h>

int main(void) {
    int t,a,i,j,max;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        char d='a';
        scanf("%d",&a);
        char c[a];
        
        scanf("%s",c);
        int h[26]={0};
        for(i=0;i<a;i++)
        {
            h[c[i]-97]++;
        }
       
      
        for(i=0;i<26;i++)
        {
            if(h[i]>=2)
        
            break;
        }
        if(i==26)
        max=-1;
        else
        max=h[i];
        for(i=0;i<26;i++)
        {
            if(h[i]<max&&h[i]!=0&&h[i]!=1)
            max=h[i];
        }
        if(max>1)
        printf("%d\n",a-2);
        else
        printf("-1\n");
    }
	return 0;
}

