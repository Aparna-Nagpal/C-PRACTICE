"""
ICE CREAM PARLOR
Input Format
The first line contains an integer, , the number of trips to the ice cream parlor. The next  sets of lines each describe a visit.
Each trip is described as follows:
The integer , the amount of money they have pooled.
The integer , the number of flavors offered at the time. space-separated integers denoting the cost of each flavor:
Output Format
Print the indices of the prices of the two flavors they buy, sorted ascending
"""
t=int(input())
while(t>0):
    t=t-1
    m=int(input())
    n=int(input())
    l=list(map(int,input().split()))
    p=[]
    f=0
    for i in range(n):
        f=0
        for j in range(n):
            if(i!=j):
                if(l[i]+l[j]==m):
                    p.append(i+1)
                    p.append(j+1)
                    p.sort()
                    print(*p,end=' ')
                    print()
                    p=[]
                    f=1
                    break
        if(f==1):
            break         
