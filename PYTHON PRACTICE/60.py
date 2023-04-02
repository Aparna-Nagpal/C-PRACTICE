"""
SECRET RECIPE difficulty rating:888
Chef and his competitor Kefa own two restaurants located at a straight road. The position of Chef's restaurant is 
X1, the position of Kefa's restaurant is X2.
Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. The position of the bottle is X3.
The cooks immediately started to run to the bottle. Chef runs with speed V1 , Kefa with speed V2 .
Your task is to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same time).
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains five space-separated integers X1,X2,X3,V1 and V2 .
Output
For each test case, print a single line containing the string "Chef" if Chef reaches the bottle first, "Kefa" if Kefa reaches the bottle first or "Draw" if Chef and Kefa reach the bottle at the same time (without quotes).
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c,d,e=map(int,input().split())
    r=c-a
    s=c-b
    p=r/d
    q=s/e
    if(p<0):
        p=p*-1
    if(q<0):
        q=q*-1
    if(p<q):
        print("Chef")
    elif(p==q):
        print("Draw")
    else:
        print("Kefa")
