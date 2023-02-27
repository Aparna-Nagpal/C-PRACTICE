"""
  NEGATIVE PRODUCT difficulty rating:630
    Chef is given three numbers A,B, and C.
He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three integers A,B, and C, the given numbers.
Output Format
For each test case, output YES if Chef can select exactly two numbers out of these such that the product of the selected numbers is negative, NO otherwise.
You may print each character in uppercase or lowercase. For example, the strings NO, no, No, and nO, are all considered identical.
  """
  t=int(input())
while(t>0):
    n=0
    p=0
    z=0
    t=t-1
    a,b,c=map(int,input().split())
    if(a>0 or b>0 or c>0):
        p=p+1
    if(a<0 or b<0 or c<0):
        n=n+1
    if(p>0 and n>0):
        print("yes")
    else:
        print("no")
