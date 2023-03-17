"""
THREE FRIENDS difficulty rating:1074
There are three friends; let's call them A, B, C. They made the following statements:
A: "I have x Rupees more than B."
B: "I have y rupees more than C."
C: "I have z rupees more than A."
You do not know the exact values of x,y,z. Instead, you are given their absolute values, i.e. X=∣x∣, Y=∣y∣ and Z=∣z∣. Note that x,y,z may be negative; "having  −r rupees more" is the same as "having r rupees less".
Find out if there is some way to assign amounts of money to A, B, C such that all of their statements are true.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers X, Y and Z.
Output
For each test case, print a single line containing the string "yes" if the presented scenario is possible or "no" otherwise (without quotes).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(a+b*-1+c==0 or a+c*-1+b==0 or c+a*-1+b==0 or a*-1+b*-1+c==0 or a*-1+c*-1+b==0 or c*-1+b*-1+a==0):
        print("yes")
    else:
        print("no")
