"""
GRADING STUDENTS
HackerLand University has the following grading policy:
Every student receives a grade in the inclusive range from 0 to 100.
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
Input Format
The first line contains a single integer,n, the number of students.
Each line i of the n subsequent lines contains a single integer,grade[i].
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    if(n<38):
        print(n)
    else:
        if(n%5<=2):
            print(n)
        else:
            print(n+(5-n%5))
