"""
CHEF AND EASY PROBLEM difficulty rating:1408
Chef and Roma are playing a game. Rules of the game are quite simple. Initially there are N piles of stones on the table. In each turn, a player can choose one pile and remove it from the table. Each player want to maximize the total number of stones removed by him. Chef takes the first turn.
Please tell Chef the maximum number of stones he can remove assuming that both players play optimally.
Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the number of piles.
The second line contains N space separated integers A1, A2, ..., AN denoting the number of stones in each pile.
Output
For each test case, output a single line containg the maximum number of stones that Chef can remove.
"""
t=int(input())
while(t>0):
    t=t-1
    s=0
    k=-1
    n=int(input())
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    for i in range(n):
        k=k+1
        if(k%2==0):
            s=s+l[i]
    print(s)
