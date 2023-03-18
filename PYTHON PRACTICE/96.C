"""
RECTANGLE difficulty rating:1146
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers a, b, c and d.
Output
For each test case, print a single line containing one string "YES" or "NO".
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c,d=map(int,input().split())
    if((a==b and c==d) or (a==c and b==d) or (a==d and b==c)):
        print("YES")
    else:
        print("NO")
