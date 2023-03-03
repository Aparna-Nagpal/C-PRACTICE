"""
VALID TRIANGLES difficulty rating:750
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.
Output Format
For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(a+b+c==180):
        print("YES")
    else:
        print("NO")
