"""
SMALL FACTORIAL difficulty rating:760
Write a program to find the factorial value of any number entered by the user.
Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.
Output Format
For each test case, display the factorial of the given number N in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    s=1
    for i in range(1,a+1):
        s=s*i
    print(s)
