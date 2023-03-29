"""
 HIEGHT OF RATIONALS
 Consider a fraction a/b. Its Height is defined as the maximum of its numerator and denominator. So, for example, the Height of 3/19 would be 19, and the Height of 4/27 would be 27.
Given a and b, find the Height of a/b.
Input Format
The only line of input contains two integers, a and b.
Output Format
Output a single integer, which is the Height of a/b.
  """
   a,b=map(int,input().split())
if(a>b):
    print(a)
else:
    print(b)
