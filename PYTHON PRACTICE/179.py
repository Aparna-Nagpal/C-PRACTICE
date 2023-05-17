"""
AP FREE SEQUENCES
In a recent breakthrough, sequences which do not have Arithmetic Progressions (APs) of size 3, were studied. Let us try a simple problem related to that.
Consider a sequence 
A1≤A2≤…≤An. Three elements from it, say Ai,Aj,Ak, where i<j<k, are said to form an AP, if (Aj−Ai)=(Ak−Aj). Call the sequence AP-Free, if no such three elements can be found.
Your goal is to find out whether the given sequence is AP-Free or not.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N — the size of the sequence.
The next line contains N integers - A1,A2,…,An, which is the sequence.
Output Format
For each test case, output on a new line, "YES", if the sequence is AP-Free. Output "NO" if it is not.
You may print each character in uppercase or lowercase. For example, Yes, yes, YES, and yES are all considered identical.
"""
t=int(input())
while(t>0):
    t=t-1
    f=1
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(0,n-2):
        for j in range(i+1,n-1):
            for k in range(j+1,n):
                if(l[j]-l[i]==l[k]-l[j]):
                    f=0
                    break
            if(f==0):
                break
        if(f==0):
            break
    if(f==0):
        print("No")
    else:
        print("Yes")
