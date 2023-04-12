"""
INSIDE THE STATIUM
Shubman Gill is playing an international match.
He played a total of N balls, where, in the ith ball, he scored Ai runs.
The strike rate of a player is calculated as : no. of runs/no. of balls played×100.
Preet, a math enthusiast, is currently watching the match. Help him find the number of times, Shubman's strike rate became exactly 100.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N - the total number of balls played by Gill.
The second line of each test case contains N space-separated integers where Ai denotes runs scored on ith ball.
Output Format
For each test case, output on a new line, the total number of times the strike rate of Gill became 100.
"""
t=int(input())
while(t>0):
    t=t-1
    s=0
    c=0
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(n):
        s=s+l[i]
        if(s==i+1):
            c=c+1
    print(c)
