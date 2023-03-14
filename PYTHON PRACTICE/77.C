"""
GOOD QUALITY BULBS difficulty rating:846
A bulb company claims that the average lifetime of its bulbs is at least �X units.
The company ran a test on �N bulbs. You are given the lifetime of �−1N−1 of these bulbs. What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?
Input Format
•	The first line contains a single integer �T - the number of test cases. Then the test cases follow.
•	The first line of each test case contains two integers �N and �X - denoting the number of test bulbs and the minimum average lifetime of bulbs in the company's claim.
•	The second line of each test case contains �−1N−1 space-separated integers �1,�2,…,��−1A1,A2,…,AN−1 denoting the lifetimes of �−1N−1 of the test bulbs.
Output Format
For each testcase, output the minimum non-negative integer value of lifetime the remaining bulb can have such that the claim of the company holds true
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    s=0
    r=list(input().split())
    for i in range(a-1):
        s=s+int(r[i])
    if(s>=a*b):
        print("0")
    else:
        print(a*b-s)
