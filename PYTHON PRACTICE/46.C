"""
CANDIES difficulty rating:
Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.
For the prices of the candies to be valid, Abhi's boss laid down the following condition:
A given type of candy must have distinct prices in all N cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not.
More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer N, denoting the number of cities
The second line contains 2N space-separated integers A1,A2,…,A2N— the elements of the array A.
Output Format
For each test case output the answer on a new line — Yes if the given array represents a valid list of prices, and No otherwise.
Each letter of the output may be printed in either uppercase or lowercase, i.e, Yes, YES, and yEs will all be treated as equivalent.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    s=list(input().split())
    b=[]
    f=1
    for i in s:
        D=s.count(i)
        if(D>2):
            f=0
            break
    if(f==0):
        print("no")
    else:
        print("yes")
