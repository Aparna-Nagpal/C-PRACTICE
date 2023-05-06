"""
CHEF AND STOCK PRICES
Chef wants to buy a stock whose price was S rupees when the market opened. He will buy the stock if and only if its price is in the range [A,B]. The price of the stock has changed by C% by the time he was trying to buy the stock. Will he be able to buy the stock?
Input Format
First line of the input contains T, the number of testcases. Then the test cases follow.
Each test case contains 4 space-separated integers S,A,B,C in a single line.
Output Format
For each test case, if Chef buys the stock print YES, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
"""
t=int(input())
while(t>0):
    t=t-1
    s,a,b,c=map(int,input().split())
    s=((100+c)/100)*s
    if(s<=b and s>=a):
        print("Yes")
    else:
        print("No")
