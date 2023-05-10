"""
MONOPOLY
There are 4 companies in the markets of Chefland, A, B, C, and D.
This year,Company A made a profit of P lakh rupees,Company B made a profit of Q lakh rupees,Company C made a profit of R lakh rupees,Company D made a profit of S lakh rupees.
There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.
Determine if there is a monopoly in the market or not.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line and only line of each test case contains four space-separated integers P, Q, R and S — the profits made by companies A, B, C and D respectively.
Output Format
For each test case, output YES if there is a monopoly in the market. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c,d=map(int,input().split())
    if(d>a+b+c or c>a+b+d or b>a+c+d or a>b+c+d):
        print("YES")
    else:
        print("NO")
