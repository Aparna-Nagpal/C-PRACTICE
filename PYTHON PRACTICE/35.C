"""
PACKING BOOKS difficulty rating:775
Chef is moving to a new house!
Unfortunately, this means he now has to pack up his things so that they can be moved too. Currently, Chef is packing up his (rather impressive) book collection into cardboard boxes.
Chef has X shelves of books, each of which contains exactly Y books. Each cardboard box can hold at most Z books. In order to not mess up the organization of the books, Chef will also ensure that books from different shelves will not be placed in the same box.
Under these conditions, what is the minimum number of boxes needed to pack all the books?
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one line of input, containing three space-separated integers X,Y, and Z: the values described in the statement.
Output Format
For each test case, output on a new line one integer: the minimum number of boxes needed to pack all the books.
"""
t=int(input())
while(t>0):
    t=t-1
    a,b,c=map(int,input().split())
    if(b>=c):
        if(b%c==0):
            d=b//c
        else:
            d=b//c+1
    else:
        d=1
    print(a*d)
