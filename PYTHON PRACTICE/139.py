"""
CHEF AND BATTERY
Chef's phone has a battery level of N percent.
Each minute:If the phone is on charging, the battery level increases by 2%.
Otherwise, the battery level decreases by 3%.
Find the minimum time in which Chef can make the battery level reach exactly 50%.
Note that the battery level should always lie in the range 0 to 100 (both included).
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single lines of input N - the current battery level of Chef's phone.
Output Format
For each test case, output on a new line the minimum time in which Chef can make the battery level reach exactly 50%.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    if(a>=0 and a<=100):
        if(a>50):
            k=a-50
            if(k%3==0):
                print(k//3)
            else:
                if(k%3==1):
                    print(k//3+2)
                else:
                    print(k//3+4)
        elif(a<50):
            k=50-a
            if(k%2==0):
                print(k//2)
            else:
                print(k//2+3)
        else:
            print("0")
