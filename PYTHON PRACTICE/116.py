"""
PLAYING WITH MATHCES 986
Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.
The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.
Digits are formed using matches in the following way:  
Input
•	The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
•	The first and only line of each test case contains two space-separated integers A and B.
Output
For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B).
"""
t=int(input())
l=[6,2,5,5,4,5,6,3,7,6]
while(t>0):
    t=t-1
    s=0
    a,b=map(int,input().split())
    c=a+b
    while(c>0):
        k=c%10
        c=c//10
        s=s+l[k]
    print(s)
