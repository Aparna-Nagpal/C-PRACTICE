"""
LUCKY FOUR difficulty rating:775
You are given a list of T integers, for each of them you have to calculate the number of occurrences of the digit 4 in the decimal representation.
Input
The first line of input consists of a single integer T, denoting the number of integers in the list.
Then, there are T lines, each of them contain a single integer from the list.
Output
Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the respective integer from the list.
"""
t=int(input())
while(t>0):
    t=t-1
    a=input()
    l=0
    for i in a:
        if(i=='4'):
            l=l+1
    print(l)
    
