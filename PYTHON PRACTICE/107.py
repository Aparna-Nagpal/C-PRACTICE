"""
EQUAL COINS difficulty rating:1233
Chef has X coins worth 1 rupee each and Y coins worth 2 rupees each. He wants to distribute all of these X+Y coins to his two sons so that the total value of coins received by each of them is the same. Find out whether Chef will be able to do so.
Input Format
The first line of input contains a single integer T, denoting the number of testcases. The description of T test cases follows.
Each test case consists of a single line of input containing two space-separated integers X and Y.
Output Format
For each test case, print "YES" (without quotes) if Chef can distribute all the coins equally and "NO" otherwise. You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if((a+b*2)%2!=0 or b%2!=0 and a<2):
        print("NO")
    else:
        print("YES")
