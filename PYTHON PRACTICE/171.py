"""
PLUS 2 OR MINUS 1
Chef has a number X whose value is initially 0. In one move, he can do one of the following:
Increment X by 2 i.e. X:=X+2
Decrement X by 1 i.e. X:=X−1
He can perform at most Y moves. He wants to determine how many distinct values can X have after performing at most Y moves.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer Y — the maximum number of moves Chef can perform.
Output Format
For each test case, output the number of distinct values X can have after performing at most Y moves.
"""
t=int(input())
while(t>0):
    t=t-1
    p=[]
    n=int(input())
    if(n!=0):
        print(3*n)
    else:
        print(1)
