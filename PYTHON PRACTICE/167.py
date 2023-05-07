"""
ATM QUEUE
Ramu and his wife Lata are facing a cash crisis. They go to the nearby ATM to get some cash. There are 3 ATMs inside the same room. People are standing in queue outside, and go inside the room in groups of 3 to the ATMs, fetch their money and come out. Lata has an irrational fear in getting money from ATM that her ATM pin will somehow be stolen and all her money will be lost. So, she will always like to go into the room with Ramu. Ramu is standing at position K in line, immediately followed by Lata (i.e. at position K + 1).
Can you tell whether Ramu and Lata both will be able to get money in such a way that Lata does not feel insecure?
Input
The first line contains an integer T denoting the number of test cases. T test cases follow.
The only line of each test case contains two space separated integers N and K, where N denotes number of people in the queue, and K denotes the position of Ramu.
Output
For each test case, output "yes" or "no" correspondingly denoting whether they both will be able to get the money without Lata getting scared.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(b%3==0):
        print("no")
    else:
        print("yes")
