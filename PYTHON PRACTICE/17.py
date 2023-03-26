'''
CHEF AND HIS APPS difficulty rating:702
  Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.
He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.
Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integers S,X,Y and Z — the total memory of Chef's phone, the memory occupied by the two already installed apps and the memory required by the third app.
Output Format
For each test case, output the minimum number of apps Chef has to delete from his phone so that he can install the third app.
'''
t=int(input())
while(t>0):
    t=t-1
    a,b,c,d=map(int,input().split())
    if(a-b-c>=d):
        print("0")
    else:
        g=a-b-c
        h=d-g
        if(h<=b or h<=c):
            print("1")
        elif(h<=a+b):
            print("2")
