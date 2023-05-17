"""
PRINTING BINARY ARRAY
Consider a binary array B=B1,B2,…,BM of length M. Being a binary array means that every Bi is either 0 or 1.Score(B) is defined as the number of indices i(1≤i<M) such that Bi=Bi+1.
You are given a binary array A=A1,A2,…,AN of length N. Print a binary array C of length N such thatA=C, andScore(A)=Score(C).
That is, print a binary array C which is not identical to A, but has the same Score as that of A.It can be proven that such a C always exists.
Input Format
The first line of input contains a single integer T, denoting the number of test cases.
Each test case consists of two lines of input:
The first line of each test case contains a single integer N — the length of the binary array A.
The second line of each test case contains N space-separated integers 
A1,A2,…,AN representing the binary array A.
Output Format
For each test case, print N space-separated integers C1,C2,…,CN satisfying all the given conditions.
If there are multiple solutions, you can print any of them.
Constraints
1≤T≤10 
1≤N≤10 
0≤Ai≤1
The sum of N over all test cases won't exceed 10^5.
"""
t=int(input())
while(t>0):
    t=t-1
    a=[]
    n=int(input())
    l=list(map(int,input().split()))
    for i in l:
        if(i==0):
            a.append(1)
        else:
            a.append(0)
    print(*a,end=' ')
    print()
