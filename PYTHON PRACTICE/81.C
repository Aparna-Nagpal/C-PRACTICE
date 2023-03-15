"""
WHICH MIXTURE difficulty rating:841
Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?
A mixture is called :
1.	A solution if A>0 and B>0,
2.	A solid if B=0, or
3.	A liquid if A=0.
Input Format
•	The first line contains T denoting the number of test cases. Then the test cases follow.
•	Each test case contains two space-separated integers A and B on a single line.
Output Format
For each test case, output on a single line the type of mixture Chef produces, whether it is a Solution, Solid, or Liquid. The output is case sensitive.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(a>0 and b>0):
        print("Solution")
    elif(a>0):
        print("Solid")
    else:
        print("Liquid")
