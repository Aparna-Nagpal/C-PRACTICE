"""
CRICKET MATCH
There is a cricket match in Chefland. Chef's team requires N runs to win in M overs.
Given that 1 over consists of 6 balls and a player can score a maximum of 6 runs in a ball, find whether Chef's team can win.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and M — the number of runs required to win the game and the remaining number of overs.
Output Format
For each test case, output on a new line, YES, if Chef's team can win the game. Otherwise, output NO.
You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered identical.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(b*6*6>=a):
        print("YES")
    else:
        print("NO")
