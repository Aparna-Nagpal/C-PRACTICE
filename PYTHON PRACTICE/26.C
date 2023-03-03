"""
DISTINCT COLORS difficulty rating:760
There are N different types of colours numbered from 1 to N. Chef has Ai balls having colour i, (1≤i≤N).
Chef will arrange some boxes and put each ball in exactly one of those boxes.
Find the minimum number of boxes Chef needs so that no box contains two balls of same colour.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
The first line of each test case contains a single integer N, denoting the number of colors.
The second line of each test case contains N space-separated integers 
A1,A2,…,AN — denoting the number of balls having colour i.
Output Format
For each test case, output the minimum number of boxes required so that no box contains two balls of same colour.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    s=list(input().split())
    max=0
    for i in range(a):
        a=int(s[i])
        if(a>=max):
            max=a
    print(max)
