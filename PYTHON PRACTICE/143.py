"""
SUM OF PALLINDROMIC NUMBERS difficulty rating:1230
A number is called palindromic if its decimal representation is a palindrome. You are given a range, described by a pair of integers L and R. Find the sum of all palindromic numbers lying in the range [L, R], inclusive of both the extrema.
Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a pair of space separated integers L and R denoting the range for which you are required to find the sum of the palindromic numbers.
Output
For each test case, output a single line containing the sum of all the palindromic numbers in the given range.
"""
t=int(input())
while(t>0):
    t=t-1
    s=0
    a,b=map(int,input().split())
    for i in range(a,b+1):
        j=str(i)
        if(j[::]==j[::-1]):
            s=s+i
    print(s)
