"""
EQUAL INTEGERS difficulty rating:852
Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:
•	set X:=X+1
•	or set Y:=Y+2
Find the minimum number of operations required to make X and Y equal.
Input Format
•	The first line contains a single integer T — the number of test cases. Then the test cases follow.
•	The first and only line of each test case contains two space separated integers X and Y.
Output Format
For each test case, print the minimum number of operations required to make X and Y equal.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(a<=b):
        print(b-a)
    else:
        if((a-b)%2==0):
            print((a-b)//2)
        else:
            print((a-b)//2+2)
