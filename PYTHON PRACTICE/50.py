"""
CANDY LOVE difficulty rating:1054
Sammy and Simmy love candies and frequently visit the local candy shop. Sammy and Simmy have bought N candy packs. Packet i contains Ai candies. Sammy being the elder one is happy only if she has strictly more candies than Simmy. However Simmy, the more sensible one, is happy only if the difference between their number of candies is not more than 1.
The shopkeeper, being a generous lady, agrees to help Sammy and Simmy by distributing the candies among them in a way that makes both of them happy. The shopkeeper can open the packs and distribute the candies even within a single pack to different people.
Input Format:
The first line will contain T, the number of testcases.
The first line of every test case will contain N, the number of candy packs.
The next line has N integers, the ℎith integer denoting Ai, the number of candies in the ℎith pack.
Output Format: Output "YES" if its possible for the shopkeeper to make both the sisters happy otherwise output "NO".
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    b=list(map(int,input().split()))
    l=0
    for i in range(a):
        l=l+b[i]
    if(l%2!=0):
        print("YES")
    else:
        print("NO")
