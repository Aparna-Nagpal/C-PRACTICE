"""
SECOND LARGEST difficulty rating:730
Three numbers A, B and C are the inputs. Write a program to find second largest among them.
Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.
Output Format
For each test case, display the second largest among A, B and C, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if((a>=b and a<=c) or (a>=c and a<=b)):
        print(a)
    elif((b>=a and b<=c) or (b>=c and b<=a)):
        print(b)
    elif((c>=b and c<=a) or (c>=a and c<=b)):
        print(c)
