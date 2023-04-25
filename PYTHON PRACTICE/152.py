"""
set.intersection OPERATION
Input Format
The first line contains , the number of students who have subscribed to the English newspaper.
The second line contains  space separated roll numbers of those students.
The third line contains , the number of students who have subscribed to the French newspaper.
The fourth line contains  space separated roll numbers of those students.
Output Format
Output the total number of students who have subscriptions to both English and French newspapers.
"""
n=int(input())
a=set(map(int,input().split()))
m=int(input())
b=set(map(int,input().split()))
print(len(a.intersection(b)))
