"""
NEAREST COURT difficulty rating:819
Chef and Chefina are at positions X and Y on a number line.
They both love badminton.
It is known that badminton courts are located at every integer point.
They want to find a court such that the maximum distance travelled by either of them is minimized.
Formally, suppose they choose the badminton court at position Z. You need to find the minimum value of max(∣X−Z∣,∣Y−Z∣) across all possible choices of Z. Here, ∣X∣ denotes absolute value of X.
Report this minimum value.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y.
Output Format
For each test case, output the minimum possible value of max(∣X−Z∣,∣Y−Z∣).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    c=a+b
    if(c%2==0):
        d=c//2
    else:
        d=c//2+1
    if(a>=d):
        e=a-d
    else:
        e=d-a
    if(b>=d):
        f=b-d
    else:
        f=d-b
    if(e>=f):
        print(e)
    else:
        print(f)
