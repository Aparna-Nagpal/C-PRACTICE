"""
ADJACENT SUM PARITY difficulty rating:1013
Chef has an array A of length N.
Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. Formally,
Bi=(Ai+Ai+1)%2 for 1≤i≤N−1 
BN=(AN+A1)%2
Here x%y denotes the remainder obtained when x is divided by y.
Chef lost the array A and needs your help. Given array B, determine whether there exits any valid array A which could have formed B.
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A.
The second line of each test case contains N space-separated integers B1,B2,…,BN denoting the array B.
Output Format
For each testcase, output YES if there exists a valid array A, NO otherwise.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    s=list(input().split())
    l=0
    for i in range(a):
        l=l+int(s[i])
    if(l%2==0):
        print("yes")
    else:
        print("no")
