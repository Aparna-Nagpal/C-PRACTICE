"""
MINIMUM SUM 1315
You are given an array A1,A2,…,AN of length N. You can perform the following operation any number of times (possibly 0 times) :
Choose any two indices i and j and replace either Ai or Aj with gcd(Ai,Aj).
Find the minimum possible sum (ie. A1+A2+⋯+AN) that you can achieve, and output that.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains an integer N - the length of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, output on a new line the minimum sum of the array that can be achieved.
"""
from math import gcd
t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    s=a[0]
    for i in range(1,n):
        s=gcd(s,a[i])
    print(s*n)
