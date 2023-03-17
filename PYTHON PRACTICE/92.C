"""
EQUALIZE AB difficulty rating:1069
You are given two numbers A and B along with an integer X. In one operation you can do one of the following:
Set A=A+X and B=B−X
Set A=A−X and B=B+X
Determine if you can make A and B equal after applying the operation any number of times (possibly zero).
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers A,B and X — the parameters mentioned in the statement.
Output Format
For each test case, output YES if you can make A and B equal after applying the operation any number of times (possibly zero). Otherwise, output NO.
You can output each letter in any case i.e. YES, yes, yEs are all considered the same.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(((a-b)/2)%c==0):
        print("YES")
    else:
        print("NO")
