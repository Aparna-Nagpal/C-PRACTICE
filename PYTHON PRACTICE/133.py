"""
SUBARRAY DIVISION
Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
Lily decides to share a contiguous segment of the bar selected such that:
The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.
"""
n=int(input())
l=list(map(int,input().split()))
d,m=map(int,input().split())
a=0
c=0
s=0
while(a<=n):
    for i in l[a:m+a]:
        s=s+i
    if(s==d):
        c=c+1
    a=a+1
    s=0
print(c)
