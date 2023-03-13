"""
GCD AND LCM difficulty rating:635
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.
Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.
Output Format
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.
"""
import math
t=int(input())
while(t>0):
    t=t-1
    n=1
    a,b=map(int,input().split())
    A=math.gcd(a,b)
    B=a*b//A
    print(A,B)
