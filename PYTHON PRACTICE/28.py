"""
WASTING TIME319
Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after K weeks.
X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information.
It is guaranteed that the information has not been revealed to the Chef yet.
Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers K and X, as described in the problem statement.
Output Format
For each test case, output the number of remaining days that Chef will have to wait for.
"""
x=int(input())
while(x>0):
    x=x-1
    k,y=map(int,input().split())
    print(k*7-y)
