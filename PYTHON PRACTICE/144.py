"""
3 DIVISOR
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.
Input Format:Integer type
Constraints
1 <= n <= 104
Output Format:Boolean type
Sample Input 0
n = 2
Sample Output 0
false
Explanation 0
2 has only two divisors: 1 and 2.
"""
a,b=input().split('=')
b=int(b)
c=0
for i in range(1,b+1):
    if(b%i==0):
        c=c+1
if(c==3):
    print("true")
else:
    print("false")
