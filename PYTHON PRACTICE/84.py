"""
GRADE THE STEEL difficulty rating:838
A certain type of steel is graded according to the following conditions.
1.	Hardness of the steel must be greater than 50
2.	Carbon content of the steel must be less than 0.7
3.	Tensile strength must be greater than 5600
The grades awarded are as follows:
•	Grade is 10 if all three conditions are met
•	Grade is 9 if conditions (1) and (2) are met
•	Grade is 8 if conditions (2) and (3) are met
•	Grade is 7 if conditions (1) and (3) are met
•	Grade is 6 if only one condition is met
•	Grade is 5 if none of the three conditions are met
Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.
Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three numbers hardness, carbon content and tensile strength of the steel.
Output Format
For each test case, print Grade of the steel depending on Conditions, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(float,input().split())
    if(a>50 and b<0.7 and c>5600):
        print("10")
    elif(a>50 and b<0.7):
        print("9")
    elif(b<0.7 and c>5600):
        print("8")
    elif(a>50 and c>5600):
        print("7")
    elif(a>50 or b<0.7 or c>5600):
        print("6")
    else:
        print("5")
