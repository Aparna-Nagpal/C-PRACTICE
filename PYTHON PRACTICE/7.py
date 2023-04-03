"""
SCALENE TRIANGLE
Given A,B, and C as the sides of a triangle, find whether the triangle is scalene.
Note:
A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space-separated integers A,B, and C — the length of the three sides of the triangle.
Output Format
For each test case, output on a new line, YES, if the triangle is scalene, and NO otherwise.
You may print each character of the string in uppercase or lowercase. For example, YES, yes, Yes, and yEs are all considered identical.
 """
  
  x=int(input())
while(x>0):
    x=x-1
    a,b,c=map(int,input().split())
    if(a==b or a==c or b==c):
        print("no")
    else:
        print("yes")
    
