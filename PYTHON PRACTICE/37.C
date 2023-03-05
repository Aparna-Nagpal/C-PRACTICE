"""
HELPING CHEF difficulty rating:776
Write a program, which takes an integer N and if the number is less than 10 then display "Thanks for helping Chef!" otherwise print "-1".
Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
Output Format
For each test case, output the given string or -1 depending on conditions, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    if(a<10):
        print("Thanks for helping Chef!")
    else:
        print("-1")
