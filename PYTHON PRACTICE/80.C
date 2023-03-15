"""
REDISTRIBUTING CHOCOLATES difficulty rating:842
Alice, Bob, and Charlie have X,Y, and Z chocolates respectively.
Find whether you can redistribute the chocolates such that:
•	Each person has at least one chocolate;
•	No two people have same number of chocolates;
•	No chocolate is left after redistribution.
Input Format
•	The first line of input will contain a single integer T, denoting the number of test cases.
•	The first and only line of each test case contains three space-separated integers X,Y, and Z — the number of chocolates Alice, Bob, and Charlie have initially.
Output Format
For each test case, output on a new line YES, if you can redistribute all the chocolates such that all the given conditions are met, and NO otherwise.
You may print each character in uppercase or lowercase. For example, NO, no, No and nO, are all considered identical.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(a+b+c>3and (a+b+c)%3==0 and a+b+c<=6):
        print("yes")
    elif(a+b+c>6):
        print("yes")
    else:
        print("no")
