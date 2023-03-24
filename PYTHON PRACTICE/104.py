"""
WA TEST CASES difficulty rating:976
Your job now is to find that smallest test case that a particular submission fails on. That problem has N test cases, and you are given the size of each of those test cases as S1,S2,…,SN. You are also given a binary string V, which tells whether the submission has passed a particular test case or not. That is, if the ℎith bit of V is 11, that means that the submission has passed the ℎith test case. If it is 00, then it has failed that test case. Your job is the output the size of the smallest test case where the submission has failed.
Input Format
•	The first line of input will contain a single integer T, denoting the number of test cases.
•	Each test case consists of multiple lines of input.
o	The first line of each test case contains a single integer, N.
o	The second line contains N integers - S1,S2,…,SN
o	The third line contains a binary string - V.
Output Format
For each test case, output on a new line, a single integer, which should be the size of the smallest test case where the submission has failed.
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    a=list(map(int,input().split()))
    b=input()
    min=max(a)
    for i in range(n):
        if(b[i]=='0'):
            k=a[i]
            if(k<min):
                min=k
    print(min)
