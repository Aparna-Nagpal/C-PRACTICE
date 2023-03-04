"""
BUCKET AND OVERFLOW 483
Alice has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters.
Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour. She left the tap running for exactly Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input containing four space-separated integers W, X, Y, Z.
Output Format
For each test case, print the answer on a new line:
If the bucket has overflown print overflow
If it is exactly filled print filled
If it is still unfilled, print unfilled
"""
x=int(input())
while(x>0):
    x=x-1
    a,b,c,d=map(int,input().split())
    if(b-a==c*d):
        print("filled")
    elif(b-a>c*d):
        print("unfilled")
    else:
        print("overflow")

