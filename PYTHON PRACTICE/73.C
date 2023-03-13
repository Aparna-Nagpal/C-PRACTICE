"""
MAKE A AND B EQUAL difficulty rating:851
Chef has two numbers �A and �B.
In one operation, Chef can choose either �A or �B and multiply it by 22.
Determine whether he can make both �A and �B equal after any number (possibly, zero) of moves.
Input Format
•	The first line of input will contain a single integer �T, denoting the number of test cases.
•	Each test case consists of two space-separated integers �A and �B.
Output Format
For each test case, output YES if Chef can make both numbers equal, NO otherwise.
Note that the checker is case-insensitive i.e. YES, Yes, yes, yES are all considered same.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(a>=b):
        if(a/b==2 or a/b==4 or a/b==8 or a/b==16 or a/b==32 or a/b==1):
            print("yes")
        else:
            print("no")
    else:
        if(b/a==2 or b/a==4 or b/a==8 or b/a==16 or b/a==32):
            print("yes")
        else:
            print("no")
