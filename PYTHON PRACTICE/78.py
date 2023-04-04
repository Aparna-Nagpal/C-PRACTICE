"""
BODY MASS INDEX difficulty rating:845
You are given the height H (in metres) and mass M (in kilograms) of Chef. The Body Mass Index (BMI) of a person is computed as 2H2M.
Report the category into which Chef falls, based on his BMI:
•	Category 1: Underweight if BMI ≤18≤18
•	Category 2: Normal weight if BMI ∈{19∈{19, 2020,……, 24}24}
•	Category 3: Overweight if BMI ∈{25∈{25, 2626,……, 29}29}
•	Category 4: Obesity if BMI ≥30≥30
Input:
•	The first line of input will contain an integer, T, which denotes the number of testcases. Then the testcases follow.
•	Each testcase contains a single line of input with two space separated integers M,H, which denote the mass and height of Chef respectively.
Output: For each testcase, output in a single line, 1,2,31,2,3 or 44, based on the category in which Chef falls.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b=list(input().split())
    a=int(a)
    b=int(b)
    c=a/(b*b)
    if(c<=18):
        print("1")
    elif(c>=19 and c<=24):
        print("2")
    elif(c>=25 and c<=29):
        print("3")
    else:
        print("4")
