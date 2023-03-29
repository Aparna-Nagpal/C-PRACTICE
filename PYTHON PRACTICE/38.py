"""
PAPAER CUTTING difficulty rating:800
Chef has a square-shaped chart paper with the side length equal to N. He wants to cut out K×K squares from this chart paper.
Find the maximum number of K×K squares he can cut from the entire chart paper.
Note that, some part of the chart paper might not be a included in any K×K cutout square.
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers N and K — the side length of the entire chart paper and the side length of the cutout squares.
Output Format
For each test case, output on a new line the maximum number of K×K squares Chef can cut from the entire chart paper.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    print((a//b)**2)
