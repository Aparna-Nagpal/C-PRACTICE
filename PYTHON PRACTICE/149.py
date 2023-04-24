"""
CHECK SUBSET
You are given two sets, A and B.
Your job is to find whether set A is a subset of set B.
If set A is subset of set B, print True.
If set A is not a subset of set B, print False.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    m=set(input().split())
    b=int(input())
    n=set(input().split())
    print(m.issubset(n))
