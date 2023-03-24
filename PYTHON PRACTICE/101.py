"""
THE ONE WHERE IT ALL BEGAN 1106
Chef wants to divide N cookies between the six friends such that:
•	Each friend gets at least one cookie.
•	No two friends get the same number of cookies.
Find if it is possible for Chef to do so.
Input Format
•	First line will contain T, number of testcases. Then the testcases follow.
•	Each testcase contains of a single line of input, one integers N.
Output Format
For each test case print "YES" if Chef can divide the cookies according to the given rules, else print "NO".
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    if(a>=21):
        print("YES")
    else:
        print("NO")
