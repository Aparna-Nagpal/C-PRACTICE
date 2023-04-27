"""
Alice and Bob are two friends. Initially, the skill levels of them are zero. They work on alternative days, i.e one of Alice and Bob works on the odd-numbered days(1,3,5,…) and the other works on the even-numbered days (2,4,6,…). The skill levels of Alice and Bob increase by A,B respectively on the days they work.
Determine if it is possible that the skill levels of Alice and Bob become exactly P,Q respectively on some day.
Input Format
The first line contains an integer T, denoting the number of test cases. The T test cases then follow:
The first and only line of each test case contains four space-separated integers A,B,P,Q.
Output Format
For each test case, print YES if it is possible that the skill levels of Alice and Bob become exactly P,Q on some day, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,p,q=map(int,input().split())
    s=p//a
    r=q//b
    if(p%a==0 and q%b==0):
        if(s==r or s+1==r or s==r+1):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
