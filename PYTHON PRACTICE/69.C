"""
SUMMER HEAT difficulty rating:852
Chefland has 22 different types of coconut, type �A and type �B. Type �A contains only ��xa milliliters of coconut water and type �B contains only ��xb grams of coconut pulp. Chef's nutritionist has advised him to consume ��Xa milliliters of coconut water and ��Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type �A + type �B) that Chef should buy each week to keep himself active in the hot weather.
Input Format
•	The first line contains an integer �T, the number of test cases. Then the test cases follow.
•	Each test case contains a single line of input, four integers ��xa, ��xb, ��Xa, ��Xb.
Output Format
For each test case, output in a single line the answer to the problem.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c,d=map(int,input().split())
    if(c%a!=0):
        i=c//a+1
    else:
        i=c//a
    if(d%b!=0):
        j=d//b+1
    else:
        j=d//b
    print(i+j)
