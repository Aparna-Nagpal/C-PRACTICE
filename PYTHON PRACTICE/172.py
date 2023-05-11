"""
MAKE ALL PAIRS EQUAL
Chef has an array A of length N.
In one operation, Chef can choose any two distinct indices (1≤i,j≤N,i=j) and either change Ai to Aj or change Aj to Ai .
Find the minimum number of operations required to make all the elements of the array equal.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case consists of an integer N - denoting the size of array A.
Second line of each test case consists of N space-separated integers A1,A2,…,AN - denoting the array A.
Output Format
For each test case, output the minimum number of operations required to make all the elements equal.
"""
t=int(input())
while(t>0):
    t=t-1
    m=0
    n=int(input())
    l=list(map(int,input().split()))
    for i in l:
        a=l.count(i)
        if(a>m):
            m=a
    print(n-m)
