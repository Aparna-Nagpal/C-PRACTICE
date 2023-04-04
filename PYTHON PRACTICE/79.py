"""
CHESS FORMAT difficulty rating:844
Given the time control of a chess match as a+b, determine which format of chess out of the given 44 it belongs to.
1)1) Bullet if 3a+b<3
2)2) Blitz if 3≤a+b≤10
3)3) Rapid if 11≤a+b≤60
4)4) Classical if 60<a+b
Input Format
•	First line will contain T, number of testcases. Then the testcases follow.
•	Each testcase contains a single line of input, two integers a,b.
Output Format
For each testcase, output in a single line, answer 11 for bullet, 22 for blitz, 33 for rapid, and 44 for classical format.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(a+b<3):
        print("1")
    elif(a+b>=3 and a+b<=10):
        print("2")
    elif(a+b>=11 and a+b<=60):
        print("3")
    else:
        print("4")
  
