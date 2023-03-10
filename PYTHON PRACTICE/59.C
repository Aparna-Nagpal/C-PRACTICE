"""
LAZY CHEF difficulty rating:801
Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time. But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x,m,d.
Output Format
For each testcase, output in a single line answer to the problem.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(a*b<=a+c):
        print(a*b)
    else:
        print(a+c)
