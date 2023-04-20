"""
POSITIVE PRODUCTS difficulty rating:1178
You are given an array A of length N. Find the number of pairs of indices (i,j) such that
1≤i<j≤N
Ai⋅Aj>0
Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers 
A1,A2,…,AN denoting the arraA.
Output Format
For each test case, output the number of pairs which satisfy the above conditions.
"""
t=int(input())
while(t>0):
    c=0
    g=0
    j=0
    t=t-1
    n=int(input())
    l=list(map(int,input().split()))
    for i in l:
        if(i<0):
            g=g+1
        elif(i>0):
            j=j+1
    print(g*(g-1)//2+j*(j-1)//2)
