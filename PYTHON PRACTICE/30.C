"""
OVERSPEEDING FINE 335
Chef was driving on a highway at a speed of X km/hour.
To avoid accidents, there are fine imposed on overspeeding as follows:
No fine if the speed of the car ≤70 km/hour.
Rs 500 fine if the speed of the car is strictly greater than 70 and ≤100.
Rs 2000 fine if the speed of the car is strictly greater than 100.
Determine the fine Chef needs to pay.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X denoting the speed of Chef's car.
Output Format
For each test case, output the fine paid by Chef.
"""
a=int(input())
while(a>0):
    a=a-1
    x=int(input())
    if(x<=70):
        print("0")
    elif(x>70 and x<=100):
        print("500")
    else:
        print("2000")
