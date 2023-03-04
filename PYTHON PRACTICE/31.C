"""
  
  MONOPOLY IN CHEFLAND
Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.
There are exactly 3 companies in the market each of whose revenues are denoted by R1 ,R2  and R3 respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.
Given the revenue of the 3 companies, help Chef determine if any of them has a monopolistic advantage.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing three space separated integers R1 , R2  and R3  denoting the revenue of the three companies respectively.
Output Format
For each test case, output YES if any of the companies has a monopolistic advantage over its competitors, else output NO.
"""
x=int(input())
while(x>0):
    x=x-1
    a,b,c=map(int,input().split())
    if(a+b<c or b+c<a or c+a<b):
        print("yes")
    else:
        print("no")    
