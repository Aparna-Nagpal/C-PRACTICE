"""
PLAYING WITH STRINGS difficulty rating:1108
Chef usually likes to play cricket, but now, he is bored of playing it too much, so he is trying new games with strings. Chef's friend Dustin gave him binary strings S and R, each with length 
N, and told him to make them identical. However, unlike Dustin, Chef does not have any superpower and Dustin lets Chef perform only operations of one type: choose any pair of integers (i,j) such that 1≤i,j≤N and swap the i-th and j-th character of S. He may perform any number of operations (including zero).
For Chef, this is much harder than cricket and he is asking for your help. Tell him whether it is possible to change the string S to the target string R only using operations of the given type.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a binary string S.
The third line contains a binary string R.
Output
For each test case, print a single line containing the string "YES" if it is possible to change S to R or "NO" if it is impossible (without quotes).
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    a=input()
    b=input()
    p=0
    for i in range(n):
        if(a[i]==b[i]):
            pass
        else:
            if(a[i]=='0'):
                p=p+1
            else:
                p=p-1
    if(p==0):
        print("YES")
    else:
        print("NO")
