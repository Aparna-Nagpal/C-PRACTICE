"""
PRIME REVERSAL difficulty rating:1053
You are given two binary strings A and B, each of length N. You can perform the following operation on string A any number of times:
Select a prime number X.
Choose any substring of string A having length X and reverse the substring.
Determine whether you can make the string A equal to B using any (possibly zero) number of operations.
A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the length of the strings A and B.
The second line contains the binary string A.
The third line contains the binary string B.
Output Format
For each test case, output on a new line, YES, if you can make the string A equal to B using any number of operations and NO otherwise.
You can print each character in uppercase or lowercase. For example, YES, yes, Yes, and yES are all identical.
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    a=input()
    b=input()
    if(a==b):
        print("YES")
    else:
        p=a.count("0")
        q=a.count("1")
        r=b.count("0")
        s=b.count("1")
        if(p==r and q==s):
            print("YES")
        else:
            print("NO")
