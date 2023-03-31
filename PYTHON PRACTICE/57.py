"""
SHOE FIT difficulty rating:925
You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0) or a right shoe (represented using 1). Given A, B, C, representing the information for each shoe, find out whether you can go out now, wearing one left shoe and one right shoe.
Input Format
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers A, B, C.
Output Format
For each test case, output in a single line the answer: 1 if it's possible to go out with a pair of shoes and 0 if not.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(a+b+c==1 or a+b+c==2):
        print("1")
    else:
        print("0")
