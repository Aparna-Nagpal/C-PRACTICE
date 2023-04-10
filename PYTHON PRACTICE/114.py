"""
CHEF AND THE WILDCARD MATCHING difficulty rating:1254
Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.
Input
The first line of input contain an integer T denoting the number of test cases. Each test case consists of two lines, the first line contains the string X and the second contains the string Y.
Output
For each test case, output a single line with the word Yes if the strings can be matched, otherwise output No.
"""
t=int(input())
while(t>0):
    t=t-1
    a=input()
    b=input()
    n=len(a)
    m=len(b)
    f=0
    if(n==m):
        for i in range(n):
            if(a[i]!=b[i] and (a[i]!="?" and b[i]!="?") ):
                f=1
                break
    if(f==1):
        print("No")
    else:
        print("Yes")
