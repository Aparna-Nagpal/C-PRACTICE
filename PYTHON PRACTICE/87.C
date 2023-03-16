"""
ZERO ONES EQUAL ONE ZEROES difficulty rating:1009
Kulyash believes in equality.
Given an integer N, output a binary string of length N such that:
The count of 01 subsequences in the string is equal to the count of 10 subsequences;
The string has at least one occurrence of 0 as well as 1.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer N - the length of the binary string.
Output Format
For each test case, output any binary string of length N satisfying the given conditions.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    if(a==3):
        print("010")
    else:
        for i in range(a):
            if(i==0):
                print("1",end='')
            elif(i==a-1):
                print("1",end='')
            else:
                print("0",end='')
    print()
