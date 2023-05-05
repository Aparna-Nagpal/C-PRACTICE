"""
ONLINE OR OFFLINE 
Chef is confused whether to go out and eat at the restaurant or order food online.
The online order costs N rupees while the cost of eating at the restaurant is M rupees.
However, Chef has a discount coupon with which he can avail flat 10% off on his online order.Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and M, the cost of ordering online and eating at the restaurant respectively.
Output Format
For each test case, output on a new line:
ONLINE, if Chef gets a better deal in online ordering,
DINING if Chef gets a better deal in eating at the restaurant,
EITHER if both deals cost the same.
You may print each character in uppercase or lowercase, For example, the strings Online, online, ONLINE, and onLiNe are all considered identical.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    a=0.9*a
    if(a>b):
        print("DINING")
    elif(a<b):
        print("ONLINE")
    else:
        print("EITHER")
