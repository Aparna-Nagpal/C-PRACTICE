"""
COPS AND THE THIEF DEVU difficulty rating:1242
There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. Some M houses out of these 100 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her bag and ran into some house.
Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops. Help him in getting this information.
Input
First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the house numbers where the cops are residing.
Output
For each test case, output a single line containing the number of houses which are safe to hide from cops.
"""
t=int(input())
while(t>0):
    t=t-1
    m,x,y=map(int,input().split())
    k=[i for i in range(1,101)]
    l=list(map(int,input().split()))
    c=x*y
    for i in l:
        g=i-c
        h=i+c
        for j in range(g,h+1):
            if j in k:
                k.remove(j)
    print(len(k))
