"""
CHEF AND COOK-OFF CONTESTS difficulty rating:1185
Chef wants to prepare a Cook-Off contest with 5 problems chosen from a set of N problems. He has marked the difficulty of each problem within a range identified by one of the following strings: "cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard". According to this page, a Cook-Off contest must have problems of the following difficulties:
exactly one "cakewalk";
exactly one "simple";
exactly one "easy";
one "easy-medium" or one "medium";
one "medium-hard" or one "hard".
Given the information about the N problems, can you advise Chef if it's possible to pick 5 problems and form a valid Cook-Off contest?
Input
The first line of input contains one integer T denoting the number of test cases.
T test cases follow.
The first line of each test case contains a single integer N.
Then N lines follow; the i-th line contains a single string si, denoting the difficulty of the i-th problem.
Output
For each test case, output "Yes" if it's possible to pick 5 problems and form a valid Cook-Off contest; otherwise, output "No".
"""
t=int(input())
while(t>0):
    t=t-1
    e=0
    s=0
    m=0
    h=0
    c=0
    n=int(input())
    while(n>0):
        n=n-1
        a=input()
        if(a=='easy'):
            e=e+1
        elif(a=='simple'):
            s=s+1
        elif(a=='cakewalk'):
            c=c+1
        elif(a=='easy-medium' or a=='medium'):
            m=m+1
        else:
            h=h+1
    if(e>0 and s>0 and c>0 and m>0 and h>0):
        print("Yes")
    else:
        print("No")
