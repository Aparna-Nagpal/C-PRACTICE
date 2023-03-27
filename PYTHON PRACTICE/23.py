"""
MINIMUM NUMBER OF FLIPS dificulty rating:781
Chef has an array A of length N consisting of 1 and −1 only.
In one operation, Chef can choose any index i(1≤i≤N) and multiply the element Ai by −1.
Find the minimum number of operations required to make the sum of the array equal to 0. Output -1 if the sum of the array cannot be made 0.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case consists of a single integer N denoting the length of the array.
Second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.
Output Format
For each test case, output the minimum number of operations to make the sum of the array equal to 0. Output -1 if it is not possible to make the sum equal to 0.  
"""
t=int(input())
while(t>0):
    t=t-1
    p=0
    n=0
    a=int(input())
    r=list(input().split())
    for i in range(a):
        if(int(r[i])<0):
            n=n+1
        else:
            p=p+1
    if(n>=p):
        m=n-p
        if(m%2!=0):
            print("-1")
        else:
            print(m//2)
    else:
        m=p-n
        if(m%2!=0):
            print("-1")
        else:
            print(m//2)
        
