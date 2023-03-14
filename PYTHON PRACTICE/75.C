"""
AVERAGE NUMBER difficulty rating:
Chef had a sequence of positive integers with length N+K. He managed to calculate the arithmetic average of all elements of this sequence (let's denote it by V), but then, his little brother deleted K elements from it. All deleted elements had the same value.
Chef still knows the remaining N elements — a sequence A1,A2,…,AN. Help him with restoring the original sequence by finding the value of the deleted elements or deciding that there is some mistake and the described scenario is impossible.
Note that the if it is possible for the deleted elements to have the same value, then it can be proven that it is unique. Also note that this value must be a positive integer.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, K and V.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer — the value of the deleted elements, or −1 if there is a mistake.
"""
t=int(input())
while(t>0):
    t=t-1
    n,k,v=map(int,input().split())
    a=list(map(int,input().split()))
    d=v*(n+k)-sum(a)
    if(d<=0):
        print("-1")
    else:
        if(d%k==0):
            print(d//k)
        else:
            print("-1")                                                                                                                                      
