"""
BUY LAMPS difficulty rating:775
An electronics shop sells red and blue lamps. A red lamp costs X rupees and a blue lamp costs Y rupees.
Chef is going to buy exactly N lamps from this shop. Find the minimum amount of money Chef needs to pay such that at least K of the lamps bought are red.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing four space-separated integers N,K,X,Y.
Output Format
For each test case, output on a new line the minimum amount of money Chef needs to pay in order to buy N lamps such that at least K of the lamps bought are red.
"""
t=int(input())
while(t>0):
    t=t-1
    n,k,x,y=map(int,input().split())
    if(x>=y):
        print((n-k)*y+k*x)
    else:
        print(n*x)
