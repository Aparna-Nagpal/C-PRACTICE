"""
EFFICIENT PAN LINKING 
There are 20 officers in Chefland who can link the PAN to Aadhar.N applications were received for linking PAN. However, due to an internal conflict, each officer intends to process exactly the same number of applications.
Determine the minimum number of applications that would remain unprocessed.
Note that N can be huge and might not fit in an integer.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer N, denoting the number of applications.
Output Format
For each test case, output the minimum number of applications that will remain unprocessed.
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    print(n%20)
