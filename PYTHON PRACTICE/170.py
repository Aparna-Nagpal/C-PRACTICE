"""
DDMM or MMDD
Chef is confused by all the different formats dates can be written in. Here's a simple problem Chef wants you to solve.
You are given a date string S. The date follows the Gregorian calendar, the one used in most parts of the world.
Identify whether it is of the form DD/MM/YYYY or MM/DD/YYYY, or if it can be of both forms. Here DD denotes the 2-digit day, MM denotes the 2-digit month and YYYY denotes the 4-digit year.
It is guaranteed that S is a valid date taking at least one of these forms.
For example,
21/05/2001 is of the form DD/MM/YYYY and not MM/DD/YYYY.
10/15/2069 is of the form MM/DD/YYYY and not DD/MM/YYYY.
05/11/1999 can be of both forms.
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
Each test case consists of a single line containing a string of 10 characters S — the date string S, which is of the form DD/MM/YYYY or MM/DD/YYYY. It is guaranteed that S is a valid date taking at least one of these forms.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split('/'))
    if(a<=12 and b<=12):
        print("BOTH")
    elif(a>12):
        print("DD/MM/YYYY")
    else:
        print("MM/DD/YYYY")
