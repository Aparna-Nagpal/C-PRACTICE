"""
MAKING A MEAL difficulty rating:1214
Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N ingredients, represented by strings 1,2,…,S1,S2,…,SN. Chef took all the ingredients, put them into a cauldron and mixed them up.
In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter appears in the cauldron as many times as it appeared in all the strings in total; now, any number of times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times, it can be taken out that many times) and use it in a meal. A complete meal is the string "codechef". Help Chef find the maximum number of complete meals he can make!
Input
•	The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
•	The first line of each test case contains a single integer N.
•	N lines follow. For each i (1≤i≤N), the i-th of these lines contains a single string Si.
Output
For each test case, print a single line containing one integer — the maximum number of complete meals Chef can create.
"""
t=int(input())
k='codhef'
while(t>0):
    t=t-1
    g=[]
    a=''
    n=int(input())
    while(n>0):
        n=n-1
        a=a+input()
    for i in k:
        g.append(a.count(i))
    g[0]//=2
    g[4]//=2
    print(min(g))
