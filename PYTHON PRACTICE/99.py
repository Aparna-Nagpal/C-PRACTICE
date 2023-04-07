"""
PUPPY AND SUM difficulty rating:961
Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation.
For example, if D = 2 and N = 3, then sum(2, 3) equals to sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.
Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?
Input
The first line contains a single integer T, the number of test cases. Each test case is described by a single line containing two integers D and N.
Output
For each testcase, output one integer on a separate line.
"""
t=int(input())
while(t>0):
    t=t-1
    s=0
    a,b=map(int,input().split())
    while(a>0):
        s=0
        a=a-1
        for i in range(1,b+1):
            s=s+i
        b=s
    print(s)
