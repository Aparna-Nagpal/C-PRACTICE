"""
PET STORE difficulty rating:1126
Alice and Bob went to a pet store. There are N animals in the store where the ℎith animal is of type Ai.
Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase.
Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the number of animals in the store.
The next line contains N space separated integers, denoting the type of each animal.
Output Format
For each test case, output on a new line, YES, if it is possible that Alice and Bob end up with exactly same multiset of animals and NO otherwise.
You may print each character in uppercase or lowercase. For example, the strings YES, yes, Yes, and yES are considered identical.
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    f=1
    h=[]
    l=list(map(int,input().split()))
    for i in l:
        if i not in h:
            h.append(i)
            a=l.count(i)
            if(a%2!=0):
                f=0
                break
    if(f==0):
        print("NO")
    else:
        print("YES")
