"""
AKASH AND DINNER
Akash got his money from CodeChef today, so he decided to have dinner outside.He went to a restaurant having N items on the menu. The ℎith item on the menu belongs to the category Ai and requires Bi time to be cooked.
Akash wants to have a complete meal. Thus, his meal should have at least K distinct categories of food.The total time required to get all the food Akash orders, is the sum of the cooking time of all the items in the order.Help Akash find the minimum time required to have a complete meal or tell if it is not possible to do so.
Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains three lines:
The first line of each test case contains two space-separated integers N and K, denoting the number of dishes on the menu and the number of distinct categories in a complete meal.
The second line contains N space-separated integers where the ℎith integer is Ai, denoting the category of the ℎith dish in the menu.The third line contains N space-separated integers where the ℎith integer is Bi, denoting the time required to cook the ℎith dish in the menu.
Output Format
For each test case, output in a single line, the minimum time required to have a complete meal.If it is impossible to have a complete meal, print −1 instead.
"""
t=int(input())
while(t>0):
    t=t-1
    d={}
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    m=list(map(int,input().split()))
    for i in range(n):
        if(l[i] in d):
            d[l[i]]=min(d[l[i]],m[i])
        else:
            d[l[i]]=m[i]
    g=sorted(d.values())
    if(len(g)<k):
        print(-1)
    else:
        print(sum(g[:k]))
