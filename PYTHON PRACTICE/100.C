"""
WORKERS 1146
There are N workers; each worker is of one of the following three types:
•	A translator translates some text from Chef's language to another langague.
•	An author writes some text in Chef's language.
•	An author-translator can both write a text in Chef's language and translate it to another language.
Chef wants to have some text written and translated into some language (different from Chef's language). Chef can't do either of those tasks, but he can hire workers. For each i (1≤i≤N), if he hires the i-th worker, he must pay that worker ci coins.
Help Chef find the minimum total number of coins he needs to pay to have a text written and translated. It is guaranteed that it is possible to write and translate a text.
Input
•	The first line of the input contains a single integer N denoting the number of workers.
•	The second line contins N space-separated integers 1,2,...,c1,c2,...,cN denoting the numbers of coins Chef has to pay each hired worker.
•	The third line contains N space-separated integers 1,2,...,t1,t2,...,tN denoting the types of workers. For each valid i, the i-th worker is a translator if ti=1, an author if ti=2 or an author-translator if ti=3.
Output
Print a single line containing one integer — the minimum number of coins Chef has to pay.
"""
t=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
min1=1000000
min2=1000000
min3=1000000
for i in range(t):
    if(b[i]==1):
        if(a[i]<min1):
            min1=a[i]
    if(b[i]==2):
        if(a[i]<min2):
            min2=a[i]
    if(b[i]==3):
        if(a[i]<min3):
            min3=a[i]
if(min1+min2<min3):
    print(min1+min2)
else:
    print(min3)
