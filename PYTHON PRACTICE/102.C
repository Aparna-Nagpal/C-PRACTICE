"""
TWO DISHES 1140
Chef will have N guests in his house today. He wants to serve at least one dish to each of the N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has �A fruits, �B vegetables, and �C fishes in his house. Can he prepare at least �N dishes in total?
Input Format
•	First line will contain T, number of testcases. Then the testcases follow.
•	Each testcase contains of a single line of input, four integers N,A,B,C.
Output Format
For each test case, print "YES" if Chef can prepare at least N dishes, otherwise print "NO". Print the output without quotes.
"""
t=int(input())
while(t>0):
    t=t-1
    n,a,b,c=map(int,input().split())
    if(a>=b):
        m=b
    else:
        m=a
    b=b-m
    if(c>=b):
        m=m+b
    else:
        m=m+c
    if(m>=n):
        print("YES")
    else:
        print("NO")
