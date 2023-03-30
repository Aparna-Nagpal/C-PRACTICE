"""
APPLES AND ORANGES difficulty rating:1040
Rushitote went to a programming contest to distribute apples and oranges to the contestants.
He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:
Every contestant gets an equal number of apples; and
Every contestant gets an equal number of oranges.
Note that every fruit with Rushitote must be distributed, there cannot be any left over.
For example, 2 apples and 4 oranges can be distributed equally to two contestants, where each one receives 1 apple and 2 oranges.
However, 2 apples and 5 oranges can only be distributed equally to one contestant.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers N and M — the number of apples and oranges, respectively.
Output Format
For each test case, output on a new line the answer: the maximum number of contestants such that everyone receives an equal number of apples and an equal number of oranges.
"""
import math
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    print(math.gcd(a,b))
    
