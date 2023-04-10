"""
ZERO STRING difficulty rating:1042
You are given a binary string S of length N. You are allowed to perform the following types of operations on string S:
•	Delete any one character from S, and concatenate the remaining parts of the string. For example, if we delete the third character of 1101S=1101, it becomes 111S=111.
•	Flip all the characters of S. For example, if we flip all character of 1101S=1101, it becomes 0010S=0010.
Given that you can use either type of operation any number of times, find the minimum number of operations required to make all characters of the string S equal to 00.
Input Format
•	The first line of input will contain a single integer T, denoting the number of test cases.
•	Each test case consists of multiple lines of input.
o	The first line of each test case contains an integer N — the length of the string.
o	The next line contains a binary string S of length N.
Output Format
For each test case, output on a new line, the minimum number of operations required to make all characters of the string S equal to 00.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    b=input()
    o=0
    z=0
    for i in b:
        if(i=='1'):
            o=o+1
        else:
            z=z+1
    if(o<=z):
        print(o)
    else:
        print(z+1)
