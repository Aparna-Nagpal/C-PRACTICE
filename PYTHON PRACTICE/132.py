"""
FIND DIGITS
An integer d is a divisor of an integer n if the remainder of n%d=0.
Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.

Example
n=124
Check whether 1,2 and 4 are divisors of 124. All 3 numbers divide evenly into 124 so print 3.
n=111
Check whether 1,1 and 1 are divisors of 111. All 3 numbers divide evenly into 111 so print 3.
n=10
Check whether 1 and 0 are divisors of 10. 1 is, but 0 is not. print 1.
"""
t=int(input())
while(t>0):
    t=t-1
    c=0
    n=int(input())
    s=str(n)
    for i in s:
        a=int(i)
        if(a==0):
            pass
        else:
            if(n%a==0):
                c=c+1
    print(c)
        
